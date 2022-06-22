cmake_minimum_required(VERSION 3.22)
project(ProgrObjekt_Projekt)

set(CMAKE_CXX_STANDARD 17)

add_executable(ProgrObjekt_Projekt main.cpp controller.cpp controller.h operations.h addiction.cpp addiction.h substraction.cpp substraction.h multiplication.cpp multiplication.h division.cpp division.h dataCollect.cpp dataCollect.h)
