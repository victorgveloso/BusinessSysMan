include_directories(.)
file(GLOB core_LIB_SOURCES ./*.cpp)
file(GLOB coreLIB_HEADERS ./*.h)
add_library(BSMcore SHARED ${core_LIB_SOURCES} ${core_LIB_HEADERS})
