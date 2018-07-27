
#include "dpxGeoEngine.h"

dpxGeoEngine* dpxGeoEngine::Instance()
{
	static dpxGeoEngine instance;
	return &instance;
}

dpxGeoEngine::dpxGeoEngine()
{
	m_pMap = nullptr;
	m_bCanDelete = true;
}

dpxLayer* dpxGeoEngine::getLyrFormType(dpxLayerType eType)
{
	if(m_pMap == nullptr)
		return nullptr;
	LayerVec vecLyrs = m_pMap->GetAllLayers();
	for(int i =0;i<vecLyrs.size();i++)
	{
		if(vecLyrs[i]!=nullptr && vecLyrs[i]->GetType()==eType)
			return vecLyrs[i];
	}
	return nullptr;
}
//道路层
dpxLayer* dpxGeoEngine::getRoadLyr()
{
	return getLyrFormType(eOT_Road);
}
//路灯层
dpxLayer* dpxGeoEngine::getLightLyr()
{
	return getLyrFormType(eOT_Light);
}
//指示牌层
dpxLayer* dpxGeoEngine::getIndicatorLry()
{
	return getLyrFormType(eOT_Indicator);
}
//获取其它层
dpxLayer* dpxGeoEngine::getOtherLry()
{
	return getLyrFormType(eOT_Other);
}

dpxLayer* dpxGeoEngine::getZebraLineLry()
{
	return getLyrFormType(eOT_ZebraLine);
}

void dpxGeoEngine::slotObjDelete()
{
	emit sigObjDelete();
}

void dpxGeoEngine::slotMapChanged()
{
	emit sigMapChanged();
}

void dpxGeoEngine::slotMapNameChanged()
{
	emit sigMapNameChanged();
}

void dpxGeoEngine::slotLayerNameChanged(const QString& strLryID)
{
	emit sigLayerNameChanged(strLryID);
}

void dpxGeoEngine::slotLayerVisibleChanged(const QString& strLryID)
{
	emit sigLayerVisibleChanged(strLryID);
}

void dpxGeoEngine::slotLayerEditableChanged(const QString& strLryID)
{
	emit sigLayerEditableChanged(strLryID);
}

void dpxGeoEngine::slotFeatureGeomteryChanged(const QString& strLayerID, int nFeatureID)
{
	emit sigFeatureGeomteryChanged(strLayerID,nFeatureID);
}

void dpxGeoEngine::slotFeatureAttributeChanged(const QString& strLayerID, int nFeatureID)
{
	emit sigFeatureAttributeChanged(strLayerID,nFeatureID);
}

void dpxGeoEngine::setCanDelete(bool bCanDelete)
{
	m_bCanDelete = bCanDelete;
}

bool dpxGeoEngine::getCanDelete()
{
	return m_bCanDelete;
}
