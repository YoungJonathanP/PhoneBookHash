cmake_minimum_required(VERSION 3.10)
project(PhoneBookHash)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(PhoneBookHash
        main.cpp
        Hashing.cpp
        Hashing.h
        Histogram.cpp
        Histogram.h
        Parsing.cpp
        Parsing.h
        PhoneBook.cpp
        PhoneBook.h)
