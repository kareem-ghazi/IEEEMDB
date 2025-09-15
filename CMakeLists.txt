cmake_minimum_required(VERSION 3.31)
project(ieeemdb)

set(CMAKE_CXX_STANDARD 20)

add_executable(ieeemdb main.cpp
        src/Movie.cpp
        src/Movie.h
        src/Actor.cpp
        src/Actor.h
        src/Review.cpp
        src/Review.h
        src/User.cpp
        src/User.h
        src/MovieList.cpp
        src/MovieList.h)
