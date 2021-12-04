cmake_minimum_required(VERSION 3.20)
project(Mastering_Cpp_Programming)

set(CMAKE_CXX_STANDARD 17)

include_directories(Chapter03/Templates/classtemplate)
include_directories(Chapter03/Templates/partial_specialization)
include_directories(Chapter03/Templates/specialization)
include_directories(Chapter05/Ex10)
include_directories(Chapter05/Ex3)
include_directories(Chapter05/Ex4)
include_directories(Chapter05/Ex5)
include_directories(Chapter05/Ex6)
include_directories(Chapter05/Ex7)
include_directories(Chapter05/Ex8)
include_directories(Chapter05/Ex9)
include_directories(Chapter06/Multithreading/Ex3)
include_directories(Chapter06/Multithreading/Ex4)
include_directories(Chapter06/Multithreading/Ex5)
include_directories(Chapter06/Multithreading/Ex6)
include_directories(Chapter06/Multithreading/Ex7)
include_directories(Chapter06/Multithreading/Ex8)
include_directories("Chapter09/Chapter09/memory leaks")
include_directories(Chapter10/OCP)

add_subdirectory(Chapter01)
#(
#        "Chapter01/01_auto-deduction_for_class_templates.cpp"
#        "Chapter01/Braced initializer list/main.cpp"
#        Chapter01/Features/main.cpp
#        "Chapter01/Inline variables/main.cpp"
#        "Chapter01/local scoped variables/main.cpp"
#        "Chapter01/Simplified static_assert/staticassert.cpp"
#        "Chapter01/stdinvoke method/main.cpp"
#        "Chapter01/structured binding/main.cpp"
#        Chapter02/STL/Array/main.cpp
#        Chapter02/STL/AssociativeContainers/map/main.cpp
#        Chapter02/STL/AssociativeContainers/multiset/main.cpp
#        Chapter02/STL/AssociativeContainers/priorityqueue/main.cpp
#        Chapter02/STL/AssociativeContainers/Queue/main.cpp
#        Chapter02/STL/AssociativeContainers/set/main.cpp
#        Chapter02/STL/AssociativeContainers/stack/main.cpp
#        Chapter02/STL/Deque/main.cpp
#        Chapter02/STL/Functors/main.cpp
#        Chapter02/STL/List/main.cpp
#        Chapter02/STL/map/main.cpp
#        Chapter02/STL/multimap/main.cpp
#        Chapter02/STL/multiset/main.cpp
#        Chapter02/STL/priorityqueue/main.cpp
#        Chapter02/STL/queue/main.cpp
#        Chapter02/STL/SequentialContainers/array/main.cpp
#        Chapter02/STL/SequentialContainers/deque/main.cpp
#        Chapter02/STL/SequentialContainers/forwardlist/main.cpp
#        Chapter02/STL/stack/main.cpp
#        Chapter02/STL/Vector/main.cpp
#        Chapter02/STL/Vector/main1.cpp
#        Chapter03/Templates/classtemplate/main.cpp
#        Chapter03/Templates/classtemplate/myalgorithm.h
#        Chapter03/Templates/functiontemplate/main.cpp
#        Chapter03/Templates/overloading/main.cpp
#        Chapter03/Templates/partial_specialization/main.cpp
#        Chapter03/Templates/partial_specialization/partiallyspecialized.h
#        Chapter03/Templates/specialization/dynamicarray.h
#        Chapter03/Templates/specialization/dynamicarrayforbool.h
#        Chapter03/Templates/specialization/main.cpp
#        Chapter04/SmartPointers/autoptr/main.cpp
#        Chapter04/SmartPointers/rawpointer/main.cpp
#        Chapter04/SmartPointers/sharedptr/main.cpp
#        Chapter04/SmartPointers/sharedptr/problem.cpp
#        Chapter04/SmartPointers/sharedptr/solution.cpp
#        Chapter04/SmartPointers/unique_ptr/main.cpp
#        Chapter05/Ex1/main.cpp
#        Chapter05/Ex10/main.cpp
#        Chapter05/Ex10/MyDlg.cpp
#        Chapter05/Ex10/MyDlg.h
#        Chapter05/Ex2/main.cpp
#        Chapter05/Ex3/main.cpp
#        Chapter05/Ex3/MyDlg.cpp
#        Chapter05/Ex3/MyDlg.h
#        Chapter05/Ex4/main.cpp
#        Chapter05/Ex4/MyDlg.cpp
#        Chapter05/Ex4/MyDlg.h
#        Chapter05/Ex5/main.cpp
#        Chapter05/Ex5/MyDlg.cpp
#        Chapter05/Ex5/MyDlg.h
#        Chapter05/Ex6/main.cpp
#        Chapter05/Ex6/MyDlg.cpp
#        Chapter05/Ex6/MyDlg.h
#        Chapter05/Ex7/main.cpp
#        Chapter05/Ex7/MyDlg.cpp
#        Chapter05/Ex7/MyDlg.h
#        Chapter05/Ex8/main.cpp
#        Chapter05/Ex8/MyDlg.cpp
#        Chapter05/Ex8/MyDlg.h
#        Chapter05/Ex9/BoxDlg.cpp
#        Chapter05/Ex9/BoxDlg.h
#        Chapter05/Ex9/GridDlg.cpp
#        Chapter05/Ex9/GridDlg.h
#        Chapter05/Ex9/HBoxDlg.cpp
#        Chapter05/Ex9/HBoxDlg.h
#        Chapter05/Ex9/main.cpp
#        Chapter05/Ex9/MainDlg.cpp
#        Chapter05/Ex9/MainDlg.h
#        Chapter05/Ex9/VBoxDlg.cpp
#        Chapter05/Ex9/VBoxDlg.h
#        Chapter06/Multithreading/Ex1/main.cpp
#        Chapter06/Multithreading/Ex10/main.cpp
#        Chapter06/Multithreading/Ex11/main.cpp
#        Chapter06/Multithreading/Ex12/main.cpp
#        Chapter06/Multithreading/Ex13/main.cpp
#        Chapter06/Multithreading/Ex2/main.cpp
#        Chapter06/Multithreading/Ex3/main.cpp
#        Chapter06/Multithreading/Ex3/Thread.cpp
#        Chapter06/Multithreading/Ex3/Thread.h
#        Chapter06/Multithreading/Ex4/Account.cpp
#        Chapter06/Multithreading/Ex4/Account.h
#        Chapter06/Multithreading/Ex4/main.cpp
#        Chapter06/Multithreading/Ex5/Account.cpp
#        Chapter06/Multithreading/Ex5/Account.h
#        Chapter06/Multithreading/Ex5/main.cpp
#        Chapter06/Multithreading/Ex6/Account.cpp
#        Chapter06/Multithreading/Ex6/Account.h
#        Chapter06/Multithreading/Ex6/main.cpp
#        Chapter06/Multithreading/Ex6/Thread.cpp
#        Chapter06/Multithreading/Ex6/Thread.h
#        Chapter06/Multithreading/Ex7/main.cpp
#        Chapter06/Multithreading/Ex7/Thread.cpp
#        Chapter06/Multithreading/Ex7/Thread.h
#        Chapter06/Multithreading/Ex8/main.cpp
#        Chapter06/Multithreading/Ex8/Thread.cpp
#        Chapter06/Multithreading/Ex8/Thread.h
#        Chapter06/Multithreading/Ex9/main.cpp
#        "Chapter09/Chapter09/already released memory locations/main.cpp"
#        "Chapter09/Chapter09/Debugging application/main.cpp"
#        "Chapter09/Chapter09/Detecting memory access outside the boundary of an array/arrayboundsoverrun.cpp"
#        "Chapter09/Chapter09/memory leaks/list.cpp"
#        "Chapter09/Chapter09/memory leaks/list.h"
#        "Chapter09/Chapter09/memory leaks/main.cpp"
#        "Chapter09/Chapter09/Mismatched use of new and free or malloc and delete/mismatchingnewandfree.cpp"
#        "Chapter09/Chapter09/uninitialized memory access/main.cpp"
#        Chapter10/OCP/GSTVisitor.cpp
#        Chapter10/OCP/GSTVisitor.h
#        Chapter10/OCP/Item.cpp
#        Chapter10/OCP/Item.h
#        Chapter10/OCP/main.cpp
#        Chapter10/OCP/Visitable.h
#        Chapter10/OCP/Visitor.h)
