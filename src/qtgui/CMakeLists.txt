include_directories(.)

find_package(Qt5Widgets)
if(Qt5Widgets_Found)
	#coisas do Qt
	#para aceitar os ui_nome.h gerados pelos nome.ui
	set(CMAKE_INCLUDE_CURRENT_DIR ON)
	set(CMAKE_AUTOMOC ON)

	file(GLOB LIB_SOURCES ./Sources/*.cpp)
	file(GLOB LIB_HEADERS ./Headers/*.h)
	file(GLOB LIB_UI ./Forms/*.ui)
	set(QBSM_SRC ${LIB_HEADERS} ${LIB_SOURCES})
	qt5_wrap_ui(QBSM_SRC ${LIB_UI})
	add_executable(QBSM ${QBSM_SRC})
	target_link_libraries(QBSM BSMcore Qt5::Widgets)

	install(TARGETS QBSM DESTINATION bin)
endif(Qt5Widgets_Found)
