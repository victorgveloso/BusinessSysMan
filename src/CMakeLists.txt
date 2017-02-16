cmake_minimum_required(VERSION 2.8.11)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/../cmake/")
project(BusinessSysMan)
add_subdirectory(core)

option(ENABLE_TESTS "Compile the unit tests")
option(ENABLE_QTGUI "Compile the qt graphical user interface (default)" ON)

if(ENABLE_QTGUI)
	add_subdirectory(qtgui)
endif(ENABLE_QTGUI)

if(ENABLE_TESTS)
	add_subdirectory(tests)
endif(ENABLE_TESTS)
