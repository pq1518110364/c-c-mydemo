cmake_minimum_required(VERSION 3.17)
project(mydemo)

set(CMAKE_CXX_STANDARD 14)

add_executable(mydemo main.cpp list/seq/SeqListDemo.cpp list/seq/SeqListDemo.h list/link/LinkListDemo.cpp list/link/LinkListDemo.h universal/Universal.cpp universal/Universal.h stack/SqStackDemo.cpp stack/SqStackDemo.h stack/LinkStackDemo.cpp stack/LinkStackDemo.h str/StrDemo.cpp str/StrDemo.h tree/BiTreeDemo.cpp tree/BiTreeDemo.h queue/LinkQueueDemo.cpp queue/LinkQueueDemo.h queue/SqQueueDemo.cpp queue/SqQueueDemo.h tree/AvlTreeDemo.cpp tree/AvlTreeDemo.h sort/SortDemo.cpp sort/SortDemo.h)