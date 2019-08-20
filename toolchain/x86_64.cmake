#交叉编译
set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_C_COMPILER   /usr/bin/x86_64-linux-gnu-gcc)
#set(CMAKE_CXX_COMPILER /usr/bin/x86_64-linux-gnu-g++)

set(CMAKE_FIND_ROOT_PATH  ${PROJECT_SOURCE_DIR}/lib/x86_64-sysroot/include ${PROJECT_SOURCE_DIR}/lib/x86_64-sysroot/lib)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)

include_directories(${PROJECT_SOURCE_DIR}/include)
link_directories(${PROJECT_SOURCE_DIR}/lib)
