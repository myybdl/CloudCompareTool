######################################################################
# Automatically generated by qmake (3.1) Wed Apr 11 11:06:20 2018
######################################################################

TEMPLATE = app
TARGET = CC
INCLUDEPATH += .

# The following define makes your compiler warn you if you use any
# feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
HEADERS += include/AutoSegmentationTools.h \
           include/CCConst.h \
           include/CCCoreLib.h \
           include/CCGeom.h \
           include/CCMiscTools.h \
           include/CCPlatform.h \
           include/CCShareable.h \
           include/CCToolbox.h \
           include/CCTypes.h \
           include/ChamferDistanceTransform.h \
           include/ChunkedPointCloud.h \
           include/CloudSamplingTools.h \
           include/ConjugateGradient.h \
           include/Delaunay2dMesh.h \
           include/DgmOctree.h \
           include/DgmOctreeReferenceCloud.h \
           include/DistanceComputationTools.h \
           include/ErrorFunction.h \
           include/FastMarching.h \
           include/FastMarchingForPropagation.h \
           include/Garbage.h \
           include/GenericChunkedArray.h \
           include/GenericCloud.h \
           include/GenericDistribution.h \
           include/GenericIndexedCloud.h \
           include/GenericIndexedCloudPersist.h \
           include/GenericIndexedMesh.h \
           include/GenericMesh.h \
           include/GenericOctree.h \
           include/GenericProgressCallback.h \
           include/GenericTriangle.h \
           include/GeometricalAnalysisTools.h \
           include/Grid3D.h \
           include/Jacobi.h \
           include/KdTree.h \
           include/LocalModel.h \
           include/ManualSegmentationTools.h \
           include/MathTools.h \
           include/MeshSamplingTools.h \
           include/Neighbourhood.h \
           include/NormalDistribution.h \
           include/PointProjectionTools.h \
           include/Polyline.h \
           include/RayAndBox.h \
           include/ReferenceCloud.h \
           include/RegistrationTools.h \
           include/SaitoSquaredDistanceTransform.h \
           include/ScalarField.h \
           include/ScalarFieldTools.h \
           include/SimpleCloud.h \
           include/SimpleMesh.h \
           include/SimpleTriangle.h \
           include/SortAlgo.h \
           include/SquareMatrix.h \
           include/StatisticalTestingTools.h \
           include/TrueKdTree.h \
           include/WeibullDistribution.h \
           src/Chi2Helper.h
SOURCES += src/AutoSegmentationTools.cpp \
           src/CCMiscTools.cpp \
           src/CCShareable.cpp \
           src/ChamferDistanceTransform.cpp \
           src/ChunkedPointCloud.cpp \
           src/CloudSamplingTools.cpp \
           src/Delaunay2dMesh.cpp \
           src/DgmOctree.cpp \
           src/DgmOctreeReferenceCloud.cpp \
           src/DistanceComputationTools.cpp \
           src/ErrorFunction.cpp \
           src/FastMarching.cpp \
           src/FastMarchingForPropagation.cpp \
           src/GeometricalAnalysisTools.cpp \
           src/KdTree.cpp \
           src/LocalModel.cpp \
           src/ManualSegmentationTools.cpp \
           src/MeshSamplingTools.cpp \
           src/Neighbourhood.cpp \
           src/NormalDistribution.cpp \
           src/NormalizedProgress.cpp \
           src/PointProjectionTools.cpp \
           src/Polyline.cpp \
           src/ReferenceCloud.cpp \
           src/RegistrationTools.cpp \
           src/SaitoSquaredDistanceTransform.cpp \
           src/ScalarField.cpp \
           src/ScalarFieldTools.cpp \
           src/SimpleCloud.cpp \
           src/SimpleMesh.cpp \
           src/StatisticalTestingTools.cpp \
           src/TrueKdTree.cpp \
           src/WeibullDistribution.cpp