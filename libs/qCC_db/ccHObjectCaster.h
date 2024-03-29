//##########################################################################
//#                                                                        #
//#                              CLOUDCOMPARE                              #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU General Public License as published by  #
//#  the Free Software Foundation; version 2 or later of the License.      #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the          #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#          COPYRIGHT: EDF R&D / TELECOM ParisTech (ENST-TSI)             #
//#                                                                        #
//##########################################################################

#ifndef CC_HIERARCHY_OBJECT_CASTER_HEADER
#define CC_HIERARCHY_OBJECT_CASTER_HEADER

//Local
#include "qCC_db.h"

class ccHObject;
class ccGenericPointCloud;
class ccPointCloud;
class ccGenericMesh;
class ccMesh;//网
class ccSubMesh;//子网
class ccGenericPrimitive;
class ccOctree;
class ccOctreeProxy;
class ccKdTree;
class ccSensor;
class ccGBLSensor;
class ccCameraSensor;
class ccImage;//图像
class cc2DLabel;//标签
class cc2DViewportObject;
class cc2DViewportLabel;
class ccFacet; //面
class ccPolyline;//折线
class ccIndexedTransformationBuffer;
class ccSphere;//球
class ccCylinder;//圆柱
class ccCone;//圆锥
class ccPlane;//平面
class ccDish;//盘
class ccExtru;
class ccTorus;//圆环面
class ccShiftedObject;
class ccPlanarEntityInterface;

//! Useful class to (try to) statically cast a basic ccHObject to a given type
class QCC_DB_LIB_API ccHObjectCaster
{
public:

	//! Converts current object to 'equivalent' ccPointCloud
	/** Warning: if a mesh is passed, this method returns its vertices.
		\param obj ccHObject to dynamically cast to a ccPointCloud object
		\param isLockedVertices the caller can be warned if the returned cloud corresponds to locked vertices
	**/
	static ccPointCloud* ToPointCloud(ccHObject* obj, bool* isLockedVertices = 0);

	//! Converts current object to 'equivalent' ccGenericPointCloud
	/** Warning: if a mesh is passed, this method returns its vertices.
	**/
	static ccGenericPointCloud* ToGenericPointCloud(ccHObject* obj, bool* isLockedVertices = 0);

	//! Converts current object to 'equivalent' ccShiftedObject
	/** Warning: if a mesh is passed, this method returns its vertices.
	**/
	static ccShiftedObject* ToShifted(ccHObject* obj, bool* isLockedVertices = 0);

	//! Converts current object to ccGenericMesh (if possible)
	static ccGenericMesh* ToGenericMesh(ccHObject* obj);

	//! Converts current object to ccMesh (if possible)
	static ccMesh* ToMesh(ccHObject* obj);

	//! Converts current object to ccSubMesh (if possible)
	static ccSubMesh* ToSubMesh(ccHObject* obj);

	//! Converts current object to ccPolyline (if possible)
	static ccPolyline* ToPolyline(ccHObject* obj);

	//! Converts current object to ccFacet (if possible)
	static ccFacet* ToFacet(ccHObject* obj);

	//! Converts current object to ccPlanarEntityInterface (if possible)
	static ccPlanarEntityInterface* ToPlanarEntity(ccHObject* obj);

	//! Converts current object to ccGenericPrimitive (if possible)
	static ccGenericPrimitive* ToPrimitive(ccHObject* obj);

	//! Converts current object to ccSphere (if possible)
	static ccSphere* ToSphere(ccHObject* obj);
	//! Converts current object to ccCylinder (if possible)
	static ccCylinder* ToCylinder(ccHObject* obj);
	//! Converts current object to ccCone (if possible)
	static ccCone* ToCone(ccHObject* obj);
	//! Converts current object to ccPlane (if possible)
	static ccPlane* ToPlane(ccHObject* obj);
	//! Converts current object to ccDish (if possible)
	static ccDish* ToDish(ccHObject* obj);
	//! Converts current object to ccExtru (if possible)
	static ccExtru* ToExtru(ccHObject* obj);
	//! Converts current object to ccTorus (if possible)
	static ccTorus* ToTorus(ccHObject* obj);

	//! Converts current object to ccOctreeProxy (if possible)
	static ccOctreeProxy* ToOctreeProxy(ccHObject* obj);
	//! Converts current object to ccOctree (if possible)
	static ccOctree* ToOctree(ccHObject* obj);

	//! Converts current object to ccKdTree (if possible)
	static ccKdTree* ToKdTree(ccHObject* obj);

	//! Converts current object to ccSensor (if possible)
	static ccSensor* ToSensor(ccHObject* obj);

	//! Converts current object to ccGBLSensor (if possible)
	static ccGBLSensor* ToGBLSensor(ccHObject* obj);

	//! Converts current object to ccCameraSensor (if possible)
	static ccCameraSensor* ToCameraSensor(ccHObject* obj);

	//! Converts current object to ccImage (if possible)
	static ccImage* ToImage(ccHObject* obj);

	//! Converts current object to cc2DLabel (if possible)
	static cc2DLabel* To2DLabel(ccHObject* obj);

	//! Converts current object to cc2DViewportLabel (if possible)
	static cc2DViewportLabel* To2DViewportLabel(ccHObject* obj);

	//! Converts current object to cc2DViewportObject (if possible)
	static cc2DViewportObject* To2DViewportObject(ccHObject* obj);

	//! Converts current object to ccIndexedTransformationBuffer (if possible)
	static ccIndexedTransformationBuffer* ToTransBuffer(ccHObject* obj);

};

#endif //CC_HIERARCHY_OBJECT_CASTER_HEADER
