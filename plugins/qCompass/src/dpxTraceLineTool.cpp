
#include <QApplication>
#include <QMainWindow>
#include <QMessageBox>

#include "dpxTraceLineTool.h"
#include "ccCompass.h"
#include "dpxGeoEngine.h"


dpxTraceLineTool::dpxTraceLineTool()
	: dpxPickAndEditTool()
{
	m_pPickRoot = new ccHObject("Pick Lines");
}


dpxTraceLineTool::~dpxTraceLineTool()
{
	if (m_polyTip)
		delete m_polyTip;

	if (m_poly3D)
		delete m_poly3D;
}

void dpxTraceLineTool::toolActivated()
{
	//若添加了地图，采集到地图中去
	dpxLayer* pRoadLyr = dpxGeoEngine::Instance()->getRoadLyr();
	if(pRoadLyr!=nullptr && pRoadLyr->getRootData()!=nullptr)
		m_pPickRoot = pRoadLyr->getRootData();

	dpxPickAndEditTool::toolActivated();
}

void dpxTraceLineTool::onLeftDoubleClick(int x,int y)
{
	if(m_nToolState==1)//编辑状体
	{
        dpxNodeEditTool::onLeftDoubleClick(x,y);//删除节点功能
	}
}

void dpxTraceLineTool::onMouseRightClick(int x,int y)
{
	if(m_nToolState==1)//编辑状体
	{
        dpxNodeEditTool::onMouseRightClick(x,y);//添加节点功能
	}
	else//采集状态
	{
		if (!m_poly3D || (QApplication::keyboardModifiers() & Qt::ControlModifier)) //CTRL + right click = panning
			return;

		unsigned vertCount = m_poly3D->size();
		if (vertCount < 2)
		{
			if (m_polyTip)
				m_polyTip->setEnabled(false);

			m_poly3D = 0;
			m_poly3DVertices = 0;
		}
		else
		{
			m_poly3D->enableTempColor(false);
			m_poly3D->setDisplay(m_window); //just in case
			m_poly3D = 0;
			m_poly3DVertices = 0;
			m_nToolState = 1;//右键停止采集，转为编辑状态
		}
		m_polyTip->setEnabled(false);
		m_window->removeFromOwnDB(m_pPickRoot);
		m_app->addToDB(m_pPickRoot);
	}
}

void dpxTraceLineTool::pointPicked(ccHObject* insertPoint, unsigned itemIdx, ccPointCloud* cloud, const CCVector3& P,int x/*=0*/,int y/*=0*/)
{
	if(m_nToolState==1)//编辑状体
		return;

	if (!m_window)
	{
		assert(false);
		return;
	}

	//if the 3D polyline doesn't exist yet, we create it
	if (!m_poly3D || !m_poly3DVertices)
	{
		m_poly3DVertices = new ccPointCloud("Vertices");
		m_poly3DVertices->setEnabled(false);
		m_poly3DVertices->setDisplay(m_window);

		m_poly3D = new ccPolyline(m_poly3DVertices);
		m_poly3D->setTempColor(ccColor::green);
		m_poly3D->set2DMode(false);
		m_poly3D->addChild(m_poly3DVertices);
		m_poly3D->setWidth(1);

		m_pPickRoot->addChild(m_poly3D);
	}

	//try to add one more point
	if (	!m_poly3DVertices->reserve(m_poly3DVertices->size() + 1)
		||	!m_poly3D->reserve(m_poly3DVertices->size() + 1))
	{
		ccLog::Error("Not enough memory");
		return;
	}


	m_poly3DVertices->addPoint(P);
	m_poly3D->addPointIndex(m_poly3DVertices->size() - 1);

	//we replace the first point of the tip by this new point
	{
		QPointF pos2D = m_window->toCenteredGLCoordinates(x, y);
		CCVector3 P2D(	static_cast<PointCoordinateType>(pos2D.x()),
						static_cast<PointCoordinateType>(pos2D.y()),
						0);

		CCVector3* firstTipPoint = const_cast<CCVector3*>(m_polyTipVertices->getPointPersistentPtr(0));
		*firstTipPoint = P2D;
		m_polyTip->setEnabled(false); //don't need to display it for now
	}

	m_window->redraw(false, false);
}

void dpxTraceLineTool::onMouseMove(int x, int y, Qt::MouseButtons buttons)
{
	if (!m_window)
	{
		assert(false);
		return;
	}

	if(m_nToolState==0)//采集状态
	{
		if (!m_poly3DVertices || m_poly3DVertices->size() == 0)
			return;

		assert(m_polyTip && m_polyTipVertices && m_polyTipVertices->size() == 3);

		//we replace the last point by the new one
		{
			QPointF pos2D = m_window->toCenteredGLCoordinates(x, y);
			CCVector3 P2D(	static_cast<PointCoordinateType>(pos2D.x()),
							static_cast<PointCoordinateType>(pos2D.y()),
							0);

			CCVector3* Middle = const_cast<CCVector3*>(m_polyTipVertices->getPointPersistentPtr(1));
			*Middle = P2D;
		}

		{
			const CCVector3* P3D = m_poly3DVertices->getPoint(m_poly3DVertices->size() - 1);
			ccGLCameraParameters camera;
			m_window->getGLCameraParameters(camera);

			CCVector3d A2D;
			camera.project(*P3D, A2D);

			CCVector3 vec3(static_cast<PointCoordinateType>(A2D.x - camera.viewport[2] / 2), //we convert A2D to centered coordinates (no need to apply high DPI scale or anything!)
						   static_cast<PointCoordinateType>(A2D.y - camera.viewport[3] / 2),
							0);
			CCVector3* firstP = const_cast<CCVector3*>(m_polyTipVertices->getPointPersistentPtr(0));
			CCVector3* lastP = const_cast<CCVector3*>(m_polyTipVertices->getPointPersistentPtr(2));
			*firstP = vec3;
			*lastP = vec3;
		}

		m_polyTip->setEnabled(true);
		m_window->redraw(true, false);
	}
	else//编辑状态直接采用基类
	{
		return dpxNodeEditTool::onMouseMove(x,y,buttons);
	}
}
