cmake_minimum_required(VERSION 3.20)
project(Mastering_Cpp_Programming)

set(CMAKE_CXX_STANDARD 17)

add_executable(01_auto-deduction_for_class_templates    Chapter01/01_auto-deduction_for_class_templates.cpp)
add_executable(01_braced_initializer_list               Chapter01/01_braced_initializer_list.cpp)
add_executable(01_features                              Chapter01/01_features.cpp)
add_executable(01_inline_variables                      Chapter01/01_inline_variables.cpp)
add_executable(01_local_scoped_variables                Chapter01/01_local_scoped_variables.cpp)
add_executable(01_static_assert                         Chapter01/01_static_assert.cpp)
add_executable(01_stdinvoke_method                      Chapter01/01_stdinvoke_method.cpp)
add_executable(01_structured_binding                    Chapter01/01_structured_binding.cpp)

add_executable(02_stl_array             Chapter02/02_stl_array.cpp)
add_executable(02_stl_map               Chapter02/02_stl_map.cpp)
add_executable(02_stl_multiset          Chapter02/02_stl_multiset.cpp)
add_executable(02_stl_priority_queue    Chapter02/02_stl_priority_queue.cpp)
add_executable(02_stl_queue             Chapter02/02_stl_queue.cpp)
add_executable(02_stl_set               Chapter02/02_stl_set.cpp)
add_executable(02_stl_stack             Chapter02/02_stl_stack.cpp)
add_executable(02_stl_deque             Chapter02/02_stl_deque.cpp)

add_executable(06_mt_ex01 Chapter06/06_mt_ex01.cpp)
target_link_libraries(06_mt_ex01 pthread)

add_executable(06_mt_ex02 Chapter06/06_mt_ex02.cpp)
target_link_libraries(06_mt_ex02 pthread)

add_executable(06_mt_ex03
        Chapter06/06_ex03/06_mt_ex03.cpp
        Chapter06/06_ex03/Thread.cpp
        Chapter06/06_ex03/Thread.h)
target_link_libraries(06_mt_ex03 pthread)

add_executable(06_mt_ex04
        Chapter06/06_ex04/06_mt_ex04.cpp
        Chapter06/06_ex04/Account.cpp
        Chapter06/06_ex04/Account.h)
target_link_libraries(06_mt_ex04 pthread)

add_executable(06_mt_ex05
        Chapter06/06_ex05/06_mt_ex05.cpp
        Chapter06/06_ex05/Account.cpp
        Chapter06/06_ex05/Account.h)
target_link_libraries(06_mt_ex05 pthread)

add_executable(06_mt_ex09 Chapter06/06_mt_ex09.cpp)
target_link_libraries(06_mt_ex09 pthread)

add_executable(06_mt_ex10 Chapter06/06_mt_ex10.cpp)
target_link_libraries(06_mt_ex10 pthread)
