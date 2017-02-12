include_directories(.)
file(GLOB LIB_SOURCES ./*.cpp)
file(GLOB LIB_HEADERS ./*.hpp)
add_library(BSMcore ${LIB_SOURCES} ${LIB_HEADERS})
