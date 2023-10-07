cmake_minimum_required(VERSION 3.21)
project(Code)

set(CMAKE_CXX_STANDARD 14)

add_executable(Code main.cpp sources/Packet.cpp headers/Packet.h sources/eCPRI.cpp headers/eCPRI.h sources/ethernet.cpp headers/ethernet.h)
