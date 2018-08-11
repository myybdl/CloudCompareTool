
#include "dpxMapManager.h"
#include "dpxMapDefine.h"
#include <QFileDialog>
#include <QMessageBox>
#include <ccPolyline.h>
#include <ccPlane.h>
#include <ccHObjectCaster.h>
#include "dpxMapDefine.h"

//#include "../map_param/include/map.pb.h"
//#include "map.pb.h"

//using namespace hdmap_proto;

dpxMapManager::dpxMapManager()
{
}

dpxMapManager::~dpxMapManager()
{
}

dpxMap* dpxMapManager::createMap(QString strMapName,vector<QString> vecLryNames)
{
	if(strMapName.isEmpty())
		return nullptr;
	dpxMap* pMap = new dpxMap(strMapName);
	for(int i = 0;i<vecLryNames.size();i++)
	{
		 dpxLayer* pLry = new dpxLayer(vecLryNames[i]);
		 pMap->AddLayer(pLry);
	}
	//创建地图文档
	createMapDoc(strMapName,vecLryNames);
	return pMap;
}

//定制的HDMap内容
dpxMap* dpxMapManager::createHDMap()
{
	vector<QString> vecLryNames;
	vecLryNames.push_back(ROAD_LAYER_NAME); 		//道路
	vecLryNames.push_back(LIGHT_LAYER_NAME); 		//路灯
	vecLryNames.push_back(INDICATOR_LAYER_NAME);	//指示牌
	vecLryNames.push_back(ZEBRA_LINE_LAYER_NAME);	//斑马线
	vecLryNames.push_back(OTHER_NAME);				//其它

	dpxMap* pMap = new dpxMap(HDMAP_NAME);
	//道路层
	dpxLayer* pRoadLry = new dpxLayer(ROAD_LAYER_NAME);
	pRoadLry->SetType(eOT_Road);

	//路灯杆层
	dpxLayer* pLightLry = new dpxLayer(LIGHT_LAYER_NAME);
	pLightLry->SetType(eOT_Light);

	//指示牌
	dpxLayer* pIndicatorLry = new dpxLayer(INDICATOR_LAYER_NAME);
	pIndicatorLry->SetType(eOT_Indicator);

	//指示牌
	dpxLayer* pZebraLineLry = new dpxLayer(ZEBRA_LINE_LAYER_NAME);
	pZebraLineLry->SetType(eOT_ZebraLine);

	//其它
	dpxLayer* pOtherLry = new dpxLayer(OTHER_NAME);
	pOtherLry->SetType(eOT_Other);

	//地图添加图层
	pMap->AddLayer(pRoadLry);
	pMap->AddLayer(pLightLry);
	pMap->AddLayer(pIndicatorLry);
	pMap->AddLayer(pZebraLineLry);
	pMap->AddLayer(pOtherLry);
	//创建地图文档
	createMapDoc(HDMAP_NAME,vecLryNames);

	return pMap;
}

//地图文档，可以用于加载
bool dpxMapManager::createMapDoc(QString strMapName,vector<QString> vecLryNames)
{
	return false;
}
//地图文档，可以用于加载
bool dpxMapManager::saveMapDoc(dpxMap* pMap,QString strFile)
{
	return false;
}
//地图文档，可以用于加载
bool dpxMapManager::outPutMap(ccHObject* pMapRootData,QString strOutFile/*=""*/)
{
	bool bEmpty = (strOutFile=="");
	if(bEmpty)
	{
		strOutFile=QFileDialog::getSaveFileName(nullptr, "select the location to be saved"/*, exportDir, "*.xodr"*/);
		if(strOutFile.isEmpty())
		{
			ccLog::Warning("no set out File");
			return false;
		}
	}

	QFile file(strOutFile);
    if (!file.open(QFile::ReadWrite | QFile::Text))
    {
		QMessageBox::warning(nullptr,"waring","Error: cannot creat file");
		return false;
    }

	m_textStream.setDevice(&file);
	// QString strHead = "      X1"+"      Y1"+"      Z1"+"      X2"+"      Y2"+"      Z2"+"      Radius";
	m_textStream<< " Objtype "<< " Important key " << " coordinateXYZ "  << "\n";

   //迭代输出
	Export_Recursion(pMapRootData);
	//Export_Recursion2XML(pMapRootData);

	file.close();

	if(bEmpty)
		QMessageBox::warning(nullptr,"out success", "out OK!");

	return true;
}

void dpxMapManager::Export_Recursion2XML(ccHObject* pObj)
{
	//hdmap_proto::Map *pProtoMap = new hdmap_proto::Map();
	//pProtoMap->add_roads();
	if(pObj == nullptr || !pObj)
		return;

	ccPolyline* pLine = pObj && pObj->isA(CC_TYPES::POLY_LINE) ? static_cast<ccPolyline*>(pObj) : 0;
	if(pLine!=0 && pLine != nullptr)
	{
		dpxObjectType eType = eObj_Unknown;
		bool bHasObjType = pLine->hasMetaData(DPX_OBJECT_TYPE_NAME);
		if(bHasObjType)
            eType = dpxObjectType(pLine->getMetaData(DPX_OBJECT_TYPE_NAME).toInt());

		if(eType==eObj_RoadRefLine) //道路线
		{
			ExportLine(pLine,eType);
		}
		else if(eType==eObj_RoadLine ) //RoadLine(Lane)
		{
			ExportLine(pLine,eType);
		}
		else if(eType==eObj_RoadStopLine) //StopLine
		{
			ExportLine(pLine,eType);
		}
		else if(eType==eObj_ZebraCrossingLine) //Zebra Line
		{
			ExportLine(pLine,eType);
		}
		else if(eType==eObj_OfficeLight_pole) //圆柱特征
		{
			ExportOfficeLightPole(pLine,eType);
		}
		else if(eType==eObj_OfficeLight || eType==eObj_Indication_OnRoad || eType==eObj_Indication_InSpace) //Plane
		{
			ExportPlane(pLine,eType);
		}
		else
		{
			//...
		}
	}

	int nSize = pObj->getChildrenNumber();
	if(nSize>0)
	{
		for(int i=0;i<nSize;i++)
		{
			ccHObject* pChildObj = pObj->getChild(i);
			Export_Recursion2XML(pChildObj);
		}
	}
	return ;
}

//-----------------output nomarl txt----------------------------//
void dpxMapManager::Export_Recursion(ccHObject* pObj)
{
	if(pObj == nullptr || !pObj)
		return;

	ccPolyline* pLine = pObj && pObj->isA(CC_TYPES::POLY_LINE) ? static_cast<ccPolyline*>(pObj) : 0;
	if(pLine!=0 && pLine != nullptr)
	{
		dpxObjectType eType = eObj_Unknown;
		bool bHasObjType = pLine->hasMetaData(DPX_OBJECT_TYPE_NAME);
		if(bHasObjType)
            eType = dpxObjectType(pLine->getMetaData(DPX_OBJECT_TYPE_NAME).toInt());

		if(eType==eObj_RoadRefLine || eType==eObj_RoadLine || eType==eObj_RoadStopLine || eType==eObj_ZebraCrossingLine) //道路线
		{
			ExportLine(pLine,eType);
		}
		else if(eType==eObj_OfficeLight_pole) //圆柱特征
		{
			ExportOfficeLightPole(pLine,eType);
		}
		else if(eType==eObj_OfficeLight || eType==eObj_Indication_OnRoad || eType==eObj_Indication_InSpace) //Plane
		{
			ExportPlane(pLine,eType);
		}
		else
		{
		}
	}
	int nSize = pObj->getChildrenNumber();
	if(nSize>0)
	{
		for(int i=0;i<nSize;i++)
		{
			ccHObject* pChildObj = pObj->getChild(i);
			Export_Recursion(pChildObj);
		}
	}
	return ;
}

void dpxMapManager::ExportPlane(ccPolyline* pLine,int eType)
{
	m_textStream << " Objtype " <<  QString::number(eType);
	if(pLine==nullptr || pLine==0)
		return;
	//
	QString strUID = pLine->getMetaData(DPX_RELATED_PLANE_UID).toString();
	ccHObject::Container vecHObjs;
	pLine->filterChildren(vecHObjs,true,CC_TYPES::PLANE);
	for(int i =0;i<vecHObjs.size();i++)
	{
		ccPlane* plane = ccHObjectCaster::ToPlane(vecHObjs[i]);
		if(plane==nullptr)
			continue;
		if(!plane->hasMetaData(DPX_RELATED_PLANE_UID))
			continue;
		QString sUID = plane->getMetaData(DPX_RELATED_PLANE_UID).toString();
		if(sUID.compare(strUID,Qt::CaseInsensitive)==0)//
		{
			CCVector3 vecNormal = plane->getNormal();
			m_textStream << " Normal:"<< " ( " << QString::number(vecNormal.x) <<"  "<<QString::number(vecNormal.y) <<"  "<<QString::number(vecNormal.z) << " ) ";
			vector<CCVector3> vecPts = plane->get4CornerPts();
			for(int i = 0;i<vecPts.size();i++)
			{
				CCVector3  pPt = vecPts.at(i);
				outPtCoordinate(pPt);
			}
		}
	}

	m_textStream << "\n";
}


void dpxMapManager::ExportLine(ccPolyline* pLine,int eType)
{
	m_textStream << " Objtype " <<  QString::number(eType) ;
	for(int i = 0;i<pLine->size();i++)
	{
		const CCVector3*  pPt = pLine->getPoint(i);
		outPtCoordinate(*pPt);
	}
	m_textStream << "\n";
}


void dpxMapManager::ExportOfficeLightPole(ccPolyline* pLine,int eType)
{
	QString strRadius = pLine->getMetaData("Radius").toString();
	const CCVector3* pFirst = pLine->getPoint(0);
	const CCVector3* pSecond = pLine->getPoint(1);

	m_textStream << " Objtype " <<  QString::number(eType)  << " Radius " << strRadius;
	outPtCoordinate(*pFirst);
	outPtCoordinate(*pSecond);
	m_textStream << "\n";
}

//加载地图文档
dpxMap* dpxMapManager::LoadMapDoc(QString strMapFile)
{
	return nullptr;
}

void dpxMapManager::outPtCoordinate(CCVector3 pt)
{
	m_textStream
		<< " ( " <<
	QString::number(pt.x) <<" "<<
	QString::number(pt.y) <<" "<<
	QString::number(pt.z)
		<< " ) ";
}
