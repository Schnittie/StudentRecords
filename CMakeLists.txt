cmake_minimum_required(VERSION 3.26)
project(StudentRecods)

set(CMAKE_CXX_STANDARD 23)

add_executable(StudentRecods main.cpp
        Student.cpp
        Student.h
        StudentRecords.cpp
        StudentRecords.h
        ListElement.cpp
        ListElement.h)
