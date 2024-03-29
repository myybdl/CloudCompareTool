//class name:dpxAlgorithmFun
//brif:算法函数
//by duans

#ifndef _DPX_Algorithm_Fun_HEADER_
#define _DPX_Algorithm_Fun_HEADER_

#include "math.h"
#include <CCGeom.h>
#include <ccPolyline.h>
#include <dpxMapDefine.h>

class dpxAlgorithmFun
{
public:

	static bool IsEqual(double d1,double d2);
	//点到线的距离3D
	static double DistanceOfPointToLine(CCVector3 a, CCVector3 b, CCVector3 s);

	//3D 点S投影到线AB上的点
	static CCVector3 PointProjectionToLine(const CCVector3& PtA, const CCVector3& PtB,const CCVector3& PtS);

	//线到射线的距离
	static void DistanceLineToRay(ccPolyline* pLine,CCVector3 rayAxis,CCVector3 rayOrigin,double& dDistance,int& nSegNum,double& dSegRatio,CCVector3& nearestPt);
	static void DistanceSegmentToRay(CCVector3 ptA,CCVector3 ptB,CCVector3 rayAxis,CCVector3 rayOrigin,double& dDistance,double& dSegRatio,CCVector3& nearestPt);
	//求线距离射线最近的节点
	static void DistanceLineNodeToRay(ccPolyline* pLine,CCVector3 rayAxis,CCVector3 rayOrigin,double& dDistance,int& nSegNum,double& dSegRatio,CCVector3& nearestPt);
	//线段到线段的距离
	static void DistanceSegToSeg(CCVector3 ptA, CCVector3 ptB,CCVector3 ptC, CCVector3 ptD,
								 double& dDistance,double& dRatioAB,double& dRatioCD,bool bToRay=false);

	static void DistanceSegToSeg(double x1, double y1, double z1,
											double x2, double y2, double z2,
											double x3, double y3, double z3,
											double x4, double y4, double z4,
											double& dDistance,double& dRatio12,
											double& dRatio34,bool bToRay=false);

	//已知平面法向量及其上任一点，求目标点到平面距离
	static double DistancePt2Plane(CCVector3  VecNormal,CCVector3 ptPlane,CCVector3 ptTarget);
	static CCVector3 Project2Plane(CCVector3 VecNormal,CCVector3 ptPlane,CCVector3 ptTarget);
	//查询点query是否在直径segStart，segEnd圆内部
	static bool inCircle(const CCVector3* segStart, const CCVector3* segEnd, const CCVector3* query);
	//把向量转为单位向量
	static CCVector3 NormalVec(CCVector3 vec3);
	//向量的模
	static double NormalizeValue(CCVector3 v);
	//向量的旋转角度
	static double rotationAngle(CCVector3 befor, CCVector3 after);
	//向量的旋转轴
	static CCVector3 rotationAxis(CCVector3 befor, CCVector3 after);

	//根据XYZ平移求平移矩阵 返回指针用完free
	static double* translateMatrix(double dX,double dY,double dZ);


	static bool isPointInsidePoly(const CCVector2& P,const std::vector<CCVector2>& polyVertices);
};
#endif
