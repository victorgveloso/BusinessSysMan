include_directories(.)

find_package(Qt5Widgets REQUIRED)
include_directories(./Headers/ ${Qt5Widgets_INCLUDE_DIRS})

#coisas do Qt
#para aceitar os ui_nome.h gerados pelos nome.ui
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

file(GLOB qt_LIB_SOURCES ./Sources/*.cpp)
file(GLOB qt_LIB_HEADERS ./Headers/*.h)
file(GLOB LIB_UI ./Forms/*.ui)
set(QBSM_SRC ${qt_LIB_HEADERS} ${qt_LIB_SOURCES})
qt5_wrap_ui(QBSM_SRC ${LIB_UI})
add_executable(QBSM ${QBSM_SRC})
target_link_libraries(QBSM BSMcore Qt5::Widgets)

install(TARGETS QBSM DESTINATION bin)
