//##########################################################################
//#                                                                        #
//#                    CLOUDCOMPARE PLUGIN: ccCompass                      #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU General Public License as published by  #
//#  the Free Software Foundation; version 2 of the License.               #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#                     COPYRIGHT: Sam Thiele  2017                        #
//#                                                                        #
//##########################################################################

#ifndef CC_COMPASS_HEADER
#define CC_COMPASS_HEADER

#include <QObject>
#include <QXmlStreamWriter>

//qCC
#include "../ccStdPluginInterface.h"
#include <ccPickingListener.h>
#include <qbuffer.h>
#include <QTimer>
#include <QThread>

class ccCompassDlg;
class ccFitPlaneTool;
class ccTool;

class dpxTraceLineTool;
class dpxCylinderTool;
class dpxTrafficLightPlaneTool;
class dpxSphereTool;
class dpxNodeEditTool;
class dpxSelectTool;
class dpxRoadRefLineTool;
class dpxRoadLineTool;
class dpxRoadStopLineTool;
class dpxCrossWalkTool;
class dpxMeasureTool;

class dpxSpeedBumpTool;
class dpxBoardTool;
class dpxTrafficSignTool;
class dpxLaneMarkingTool;
class dpxLaneMarkingToolV2;
class dpxParkingSpaceTool;
class dpxJunctionTool;
class dpxLineBreakTool;
class dpxLaneMarkingCopyTool;


class ccCompass : public QObject, public ccStdPluginInterface, public ccPickingListener
{
	Q_OBJECT
		Q_INTERFACES(ccStdPluginInterface)
		Q_PLUGIN_METADATA(IID "cccorp.cloudcompare.plugin.ccCompass" FILE "info.json")

public:
	//! Default constructor
	explicit ccCompass(QObject* parent = nullptr);

	//deconstructor
	~ccCompass();

	//inherited from ccPluginInterface
	virtual void stop() override { stopMeasuring(); m_dlg = nullptr; ccStdPluginInterface::stop(); } //called when the plugin is being stopped

	//inherited from ccStdPluginInterface
	void onNewSelection(const ccHObject::Container& selectedEntities) override;
	virtual void getActions(QActionGroup& group) override;

	//sets the specified object to be the current trace - provided it is a ccTrace object. If not, ccTrace becomes null.

protected slots:

	//initialise the plugin
	void doAction();

	//start picking mode
	bool startMeasuring();

	//stop picking mode
	bool stopMeasuring();

	//inherited from ccPickingListener
	virtual void onItemPicked(const ccPickingListener::PickedItem& pi) override;

	//picked point callback (called by the above function)
	void pointPicked(ccHObject* entity, unsigned itemIdx, int x, int y, const CCVector3& P);

	//general
	void onClose();
	void onUndo();

	//modes
	//void enableMapMode(); //turns on/off map mode
	void enableMeasureMode(); //turns on/off map mode

	//tools
	void setPick(); //activates the picking tool //隐藏点云
	void setPlane(); //activates the plane tool  //拟合平面
	//new tool by duans
	void setTraceLine();//折线采集功能
	void setCylinderTool();//圆柱工具
	void setLightPlaneTool();//平面采集工具
	void setSphereTool();//球采集工具
	void setNodeEditTool();//节点编辑工具
	void setSelectTool();//选择工具
	void setRoadRefLineTool();//道路参照线工具
	void setRoadLineTool();//道路线工具
	void setRoadStopLineTool();//道路停止线工具
	void setCrossWalkTool();//斑马线采集工具
	void setMeasureTool(); //MeasureTool

	void setSpeedBumpTool();
	void setBoardTool();
	void setTrafficSignTool();
	void setLaneMarkingTool();
	void setParkingSpaceTool();
	void setJunctionTool();
	void setLineBreakTool();
	void setLaneMarkingCopyTool();

	//drawing options
	void hideAllPointClouds(ccHObject* o); //hides all point clouds and adds them to the m_hiddenObjects list

	//给工具传入快捷键
	void slotKeyPress(int nKey);

	void slotOnTimeOutPut();//ding shi bao cun  di tu
protected:

	//event to get mouse-move updates & trigger repaint of overlay circle
	virtual bool eventFilter(QObject* obj, QEvent* event) override;

	void setActiveTool(ccTool* pActiveTool);
	//used to get the place/object that new measurements or interpretation should be stored

	//cleans up pointers etc before changing tools
	void cleanupBeforeToolChange();

	//registers this plugin with the picking hub
	bool startPicking();

	//removes this plugin from the picking hub
	void stopPicking();

	//Action to start ccCompass
	QAction* m_action = nullptr;

	//link to application windows
	QMainWindow* m_main_window = nullptr;

	//picking or not?
	bool m_picking = false;

	//ccCompass toolbar gui
	ccCompassDlg* m_dlg = nullptr;

	//tools
	ccTool* m_activeTool = nullptr;

	ccFitPlaneTool* m_fitPlaneTool;
	dpxTraceLineTool * m_traceLineTool; //折线工具
	dpxCylinderTool* m_dpxCylinderTool; //圆柱
	dpxTrafficLightPlaneTool* m_dpxLightPlaneTool;	//四边形工具
	dpxSphereTool* m_dpxSphereTool; //球形工具
	dpxNodeEditTool* m_dpxNodeEditTool;//节点编辑工具
	dpxSelectTool* m_dpxSelectTool; //选择工具

	dpxRoadRefLineTool* m_dpxRoadRefLineTool; //道路参考线工具
	dpxRoadLineTool* m_dpxRoadLineTool; //道路线工具
	dpxRoadStopLineTool* m_dpxRoadStopLineTool;//道路停止线工具
	dpxCrossWalkTool* m_dpxCrossWalkTool;
	dpxMeasureTool* m_dpxMeasureTool; //量测工具

	//新增加5个工具
	dpxSpeedBumpTool* m_dpxSpeedBumpTool;
	dpxBoardTool* m_dpxBoardTool;
	dpxTrafficSignTool* m_dpxTrafficSignTool;
	dpxLaneMarkingToolV2* m_dpxLaneMarkingTool;
	dpxParkingSpaceTool* m_dpxParkingSpaceTool;
	dpxJunctionTool* m_dpxJunctionTool;
	dpxLineBreakTool* m_dpxLineBreakTool;
	dpxLaneMarkingCopyTool* m_dpxLaneMarkingCopyTool;


	//currently selected/active geoObject
	std::vector<int> m_hiddenObjects; //used to hide objects (for picking)


//static flags used to define simple behaviours
public:
	static int costMode;

	QTimer *m_pTimer;
	QThread* m_pThread;
};

#endif
