cmake_minimum_required(VERSION 3.0)

project( DPX_MAP_LIB  VERSION 1.0 )
#添加头文件
include_directories( ${CC_CORE_LIB_SOURCE_DIR}/include )#依赖CC_CORE_LIB
include_directories( ${QCC_DB_LIB_SOURCE_DIR} )#依赖QCC_DB_LIB
include_directories( ${QCC_GL_LIB_SOURCE_DIR} )#依赖QCC_DB_LIB

include_directories( ${PROTOBUF_DIR} )#依赖param
include_directories( ${PROTOBUF_RAW_DIR} )


include ( ../cmake/CMakePolicies.cmake )
include ( ../cmake/CMakeSetCompilerOptions.cmake )
include( ../cmake/CMakeExternalLibs.cmake )

set(CloudCompare_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../qCC)

file( GLOB header_list *.h)
file( GLOB source_list *.cpp)

file( GLOB ui_list ui_templates/*.ui )
file( GLOB qrc_list ../qCC/*.qrc )
file( GLOB rc_list ../qCC/*.rc )

qt5_wrap_ui( generated_ui_list ${ui_list} )
add_library( ${PROJECT_NAME} SHARED ${header_list} ${source_list} ${generated_ui_list} )

#添加依赖库
target_link_libraries( ${PROJECT_NAME} CC_CORE_LIB )
target_link_libraries( ${PROJECT_NAME} QCC_DB_LIB )

#添加protobufMap
target_link_libraries( ${PROJECT_NAME} map_param )


# Qt
qt5_use_modules(${PROJECT_NAME} Core Gui Widgets )

# Add custom preprocessor definitions
if (WIN32)
	set_property( TARGET ${PROJECT_NAME} APPEND PROPERTY COMPILE_DEFINITIONS CC_USE_AS_DLL QCC_DB_USE_AS_DLL DPX_MAP_USE_AS_DLL)
endif()

# install (shared) lib to specified destinations
if( WIN32 OR APPLE )
	foreach( dest ${INSTALL_DESTINATIONS} )
		install_shared( ${PROJECT_NAME} ${dest} 1 )
	endforeach()
else()
	install_shared( ${PROJECT_NAME} lib/cloudcompare 0 ) #default destination: /usr/lib
endif()
