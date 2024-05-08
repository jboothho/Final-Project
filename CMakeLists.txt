cmake_minimum_required(VERSION 3.10)

project(final-project)

set(CMAKE_CXX_STANDARD 17)

# Add an executable target
add_executable(main
        main.cpp
        UrbanHeat.cpp
        SVI.cpp
        DataAnalysis.cpp
        MergeSort.h)