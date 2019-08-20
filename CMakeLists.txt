cmake_minimum_required (VERSION 2.8)
project(jvs-demo C CXX)

include(${PROJECT_SOURCE_DIR}/toolchain/x86_64.cmake)

#设置目标输出路径,注:PROJECT_BINARY_DIR指编译发生的目录册
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
#设置安装路径前缀
set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/result)
#添加包含源文件的子目录"src"
add_subdirectory (src)
