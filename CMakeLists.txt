project(ForwardList)
set(CMAKE_CXX_STANDARD 20)
add_executable(ForwardList main.cpp)
target_include_directories(ForwardList PRIVATE ForwardList.h)
