

#ifndef _DPX_HDMAP_ROAD_STOP_LINE_TOOL_HEADER_
#define _DPX_HDMAP_ROAD_STOP_LINE_TOOL_HEADER_

//qCC_db
#include <ccHObject.h>
#include <ccGenericGLDisplay.h>

#include "dpxTraceLineTool.h"

//停止线需要连接两个roadLine或一个refLine和RoadLine的断点

/*
Tool used to digitise traces
*/
class dpxRoadStopLineTool : public dpxTraceLineTool
{
public:
	dpxRoadStopLineTool();
	virtual ~dpxRoadStopLineTool();
public:
	virtual void toolActivated();
	virtual void toolDisactivated();

	//重写基类原因：摁快捷键盘时，需要切换线拷贝的功能，
	//点击refLine 拷贝形成车道线
	virtual void onMouseLeftClick(int x,int y);

	//键盘事件
	virtual void onKeyPress(int key);
};

#endif
