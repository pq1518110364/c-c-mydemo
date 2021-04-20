cmake_minimum_required(VERSION 3.17)
project(mydemo)

set(CMAKE_CXX_STANDARD 14)

add_executable(mydemo main.cpp list/seq/SeqListDemo.cpp list/seq/SeqListDemo.h list/link/LinkListDemo.cpp list/link/LinkListDemo.h universal/Universal.cpp universal/Universal.h)