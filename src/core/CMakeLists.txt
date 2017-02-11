include_directories(.)
file(GLOB LIB_SOURCES ./*.c)
file(GLOB LIB_HEADERS ./*.h)
add_library(BSMcore ${LIB_SOURCES} ${LIB_HEADERS})
