//by duans

#include <QApplication>
#include <QMainWindow>
#include <QMessageBox>
#include <QDateTime>
#include <QDir>

#include "dpxNodeEditTool.h"
#include "ccBBox.h"

#include "../../qCC/dpxFramework/dpxSnapHelper.h"


dpxNodeEditTool::dpxNodeEditTool()
{
	m_polyTipVertices = new ccPointCloud("Tip vertices");
	m_polyTipVertices->reserve(3);
	m_polyTipVertices->addPoint(CCVector3(0, 0, 0));
	m_polyTipVertices->addPoint(CCVector3(1, 1, 1));
	m_polyTipVertices->addPoint(CCVector3(2, 2, 2));
	m_polyTipVertices->setEnabled(false);

	m_polyTip = new ccPolyline(m_polyTipVertices);
	m_polyTip->setForeground(true);
	m_polyTip->setTempColor(ccColor::green);
	m_polyTip->set2DMode(true);
	m_polyTip->reserve(3);
	m_polyTip->addPointIndex(0, 3);
	m_polyTip->setWidth(1); //'1' is equivalent to the default line size
	m_polyTip->addChild(m_polyTipVertices);
}

dpxNodeEditTool::~dpxNodeEditTool()
{
}

//called when the tool is set to active (for initialization)
void dpxNodeEditTool::toolActivated()
{
	m_window->setCursor(Qt::CrossCursor);
	m_window->addToOwnDB(m_polyTip);
	dpxSnapHelper::Instance()->ClearShowObject();
}

void dpxNodeEditTool::toolDisactivated()
{
	//移除所有的对象
	dpxSnapHelper::Instance()->ClearShowObject();
}

//右键事件
void dpxNodeEditTool::onMouseRightClick(int x,int y)
{
	//在合适的位置添加节点
}

//右键事件
void dpxNodeEditTool::onLeftDoubleClick(int x,int y)
{
	//获取最近的线与点
	dpxNearestLine nearestInfo;
	bool bFind = getNearestLineInfo(x,y,nearestInfo);
	if(!bFind)
		return;
	//结点判断
	ccPolyline* pLine = nearestInfo.m_pLine;
	double dDistance = nearestInfo.m_dDistance;
	double dSegRatio = nearestInfo.m_dSegRatio;
	int nSegNum = nearestInfo.m_nSegNum;
	CCVector3 nearPt = nearestInfo.m_nearestPt;

	if(pLine==nullptr)
		return;

	ccPolyline* pTargetLine = nullptr;
	int nTargrtSegNum = -1;

	double dDis=0;
	int nSize = pLine->size();
	if(0<=nSegNum&&nSegNum<nSize-1)
	{
		if(dSegRatio>0.5)
		{
		    const CCVector3* pV = pLine->getPoint(nSegNum+1);
			double dx = pV->x - nearPt.x;
			double dy = pV->y - nearPt.y;
			double dz = pV->z - nearPt.z;
			dDis = sqrt( dx * dx + dy * dy + dz * dz );
			if(dDis<SNAP_TOL_VALUE)
			{
				pTargetLine = pLine;
				nTargrtSegNum = nSegNum+1;
			}
		}
		else
		{
			const CCVector3* pV = pLine->getPoint(nSegNum);
			double dx = pV->x - nearPt.x;
			double dy = pV->y - nearPt.y;
			double dz = pV->z - nearPt.z;
			dDis = sqrt( dx * dx + dy * dy + dz * dz );
			if(dDis < SNAP_TOL_VALUE)
			{
				pTargetLine = pLine;
				nTargrtSegNum = nSegNum;
			}
		}
	}

	if(pTargetLine!=nullptr && 0<=nTargrtSegNum && nTargrtSegNum<nSize)
	{
		pLine->removePointGlobalIndex(nTargrtSegNum);
		m_window->redraw(false, true);
	}
}


//左键事件  是否选中线节点，若选中则记录
void dpxNodeEditTool::onMouseLeftClick(int x,int y)
{
	m_VNodeInfo.clear();
	//获取最近的线与点
	dpxNearestLine nearestInfo;
	bool bFind = getNearestLineInfo(x,y,nearestInfo);
	if(!bFind)
		return;
	//结点判断
	ccPolyline* pLine = nearestInfo.m_pLine;
	double dDistance = nearestInfo.m_dDistance;
	double dSegRatio = nearestInfo.m_dSegRatio;
	int nSegNum = nearestInfo.m_nSegNum;
	CCVector3 nearPt = nearestInfo.m_nearestPt;

	if(pLine==nullptr)
		return;

	double dDis=0;
	int nSize = pLine->size();
	if(0<=nSegNum&&nSegNum<nSize-1)
	{
		if(dSegRatio>0.5)
		{
		    const CCVector3* pV = pLine->getPoint(nSegNum+1);
			double dx = pV->x - nearPt.x;
			double dy = pV->y - nearPt.y;
			double dz = pV->z - nearPt.z;
			dDis = sqrt( dx * dx + dy * dy + dz * dz );
			if(dDis<SNAP_TOL_VALUE)
			{
				m_VNodeInfo.m_pLine = pLine;
				m_VNodeInfo.m_nNodeIndex = nSegNum+1;
				ccLog::Warning(QString::number(nSegNum+1));
			}
		}
		else
		{
			const CCVector3* pV = pLine->getPoint(nSegNum);
			double dx = pV->x - nearPt.x;
			double dy = pV->y - nearPt.y;
			double dz = pV->z - nearPt.z;
			dDis = sqrt( dx * dx + dy * dy + dz * dz );
			if(dDis < SNAP_TOL_VALUE)
			{
				m_VNodeInfo.m_pLine = pLine;
				m_VNodeInfo.m_nNodeIndex = nSegNum;
				ccLog::Warning(QString::number(nSegNum));
			}
		}
	}
}

void dpxNodeEditTool::onMouseReleaseEvent(int x,int y)
{
	if(m_window==nullptr)
		return;

	ccPolyline* pLine = m_VNodeInfo.m_pLine;
	int nIndex = m_VNodeInfo.m_nNodeIndex;
	if(pLine==nullptr)
		return;

	if(nIndex>=pLine->size())
		return;
	if(!m_bMoveNode)//是否是拖拽节点模式
		return;
	//快速获取方式VS点击方式？？
	CCVector3d P3D;
	if(!m_window->getClick3DPos(x,y,P3D))
		return;

	CCVector3* modefyPt = const_cast<CCVector3*>(pLine->getPointPersistentPtr(nIndex));
	*modefyPt = CCVector3(static_cast<PointCoordinateType>(P3D.x),
						  static_cast<PointCoordinateType>(P3D.y),
						  static_cast<PointCoordinateType>(P3D.z));

	m_bMoveNode = false;
	m_window->redraw(false, true);
}

void dpxNodeEditTool::onMouseMove(int x, int y, Qt::MouseButtons buttons)
{
	if (buttons == Qt::LeftButton)
	{
		//节点拖动
		ccPolyline* pLine = m_VNodeInfo.m_pLine;
		int nIndex = m_VNodeInfo.m_nNodeIndex;
        if(pLine==nullptr)
			return;
		ccLog::Warning(QString::number(nIndex));
		if(nIndex<0|| nIndex>pLine->size())
		{
			ccLog::Warning("error");
			return;
		}
		ccGLCameraParameters camera;
		m_window->getGLCameraParameters(camera);

		const CCVector3* pFirst = pLine->getPoint(nIndex-1);
		const CCVector3* pLast = pLine->getPoint(nIndex+1);

		CCVector3d First2D,Last2D;
		camera.project(*pFirst, First2D);
		camera.project(*pLast, Last2D);

		CCVector3* firstPt = const_cast<CCVector3*>(m_polyTipVertices->getPointPersistentPtr(0));
		*firstPt = CCVector3(static_cast<PointCoordinateType>(First2D.x - camera.viewport[2] / 2), //we convert A2D to centered coordinates (no need to apply high DPI scale or anything!)
							static_cast<PointCoordinateType>(First2D.y - camera.viewport[3] / 2),
							0);

		CCVector3* middlePt = const_cast<CCVector3*>(m_polyTipVertices->getPointPersistentPtr(1));
		QPointF pos2D = m_window->toCenteredGLCoordinates(x, y);
		CCVector3 P2D(	static_cast<PointCoordinateType>(pos2D.x()),
						static_cast<PointCoordinateType>(pos2D.y()),
						0);
		*middlePt = P2D;

		CCVector3* LastPt = const_cast<CCVector3*>(m_polyTipVertices->getPointPersistentPtr(2));
		*LastPt = CCVector3(static_cast<PointCoordinateType>(Last2D.x - camera.viewport[2] / 2), //we convert A2D to centered coordinates (no need to apply high DPI scale or anything!)
							static_cast<PointCoordinateType>(Last2D.y - camera.viewport[3] / 2),
							0);
		m_polyTip->setEnabled(true);
		m_bMoveNode = true;
		m_window->redraw(false, false); //只刷新2D
	}
	else //显示捕捉效果
	{
		m_polyTip->setEnabled(false);
		//获取Camea
		ccGLCameraParameters camera;
		m_window->getGLCameraParameters(camera);
		double maxRadius =  camera.pixelSize / 2;

		//清空捕捉效果
		dpxSnapHelper::Instance()->ClearShowObject();
		//获取最近的线与点
		dpxNearestLine nearestInfo;
		bool bFind = getNearestLineInfo(x, y,nearestInfo);
		if(!bFind)
		{
			m_window->redraw(false, false); //只刷新2D
			return;
		}
		else //添加显示效果
		{
			ccPolyline* pNearestLine = nearestInfo.m_pLine;
			int nSize = pNearestLine->size();
			for(int i=0;i<nSize;i++)
			{
				const CCVector3* pPoint = pNearestLine->getPoint(i);
				//一个移动的小球
				ccGLMatrix transM ;
				CCVector3 vecTrans(pPoint->x,pPoint->y,pPoint->z);
				transM.setTranslation(vecTrans);

				//-----------------------以下方法可行-------------------------------//
				ccSphere* pSphere = new ccSphere(0.1,&transM,"Sphere",4);
				pSphere->setSelectionBehavior(ccHObject::SELECTION_IGNORED);
				pSphere->setDisplay(m_window);
				pSphere->setTempColor(ccColor::red);
				pSphere->setVisible(true);
				pSphere->setEnabled(true);
				dpxSnapHelper::Instance()->AddTempShowObject(pSphere,false);
			}
			//一个移动的小球，鼠标最近的线
			ccGLMatrix transM;
			CCVector3 vecTrans(nearestInfo.m_nearestPt.x,nearestInfo.m_nearestPt.y,nearestInfo.m_nearestPt.z);
			transM.setTranslation(vecTrans);

			ccSphere* pMoveSphere = new ccSphere(maxRadius,&transM,"nearestPt",6);
			pMoveSphere->setSelectionBehavior(ccHObject::SELECTION_IGNORED);
			pMoveSphere->setDisplay(m_window);
			pMoveSphere->setTempColor(ccColor::red);
			pMoveSphere->setVisible(true);
			pMoveSphere->setEnabled(true);
			//dpxSnapHelper::Instance()->AddTempShowObject(pMoveSphere,false);

			m_window->redraw(false, false); //只刷新2D
		}//捕捉效果
	}

}

void dpxNodeEditTool::pointPicked(ccHObject* insertPoint, unsigned itemIdx, ccPointCloud* cloud, const CCVector3& P,int x/*=0*/,int y/*=0*/)
{
	if (!m_window)
	{
		assert(false);
		return;
	}

	ccLog::Warning("Picked99999999999999");
	if (!insertPoint)
		return;

	m_window->redraw(false, false);
}



