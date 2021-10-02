file(GLOB_RECURSE SOURCE_FILES *.cpp)
file(GLOB_RECURSE HEADER_FILES *.hpp)

list(REMOVE_ITEM SOURCE_FILES "${CMAKE_SOURCE_DIR}/src/night/test.cpp")
list(REMOVE_ITEM SOURCE_FILES "${CMAKE_SOURCE_DIR}/src/main.cpp")
list(REMOVE_ITEM HEADER_FILES "${CMAKE_SOURCE_DIR}/src/night/test.hpp")

include_directories("${CMAKE_SOURCE_DIR}/src")

message("Sources (wax-lib): ${SOURCE_FILES}")
message("Headers (wax-lib): ${HEADER_FILES}")

add_library(wax SHARED ${SOURCE_FILES})
