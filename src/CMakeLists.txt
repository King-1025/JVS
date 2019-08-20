#扫描目录"."内的源文件
#aux_source_directory (. DIR_SRCS)              
#添加可执行文件
add_executable (demo main.c)
add_executable (ipc ipc.c)
#将目标和库文件连接
target_link_libraries (demo jcsdk pthread)
target_link_libraries (ipc jcsdk pthread)
#安装目标到最终路径
install (TARGETS demo ipc RUNTIME DESTINATION bin)
