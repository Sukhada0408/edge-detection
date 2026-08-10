cmake_minimum_required(VERSION 3.15)   # build-tool compatibility — not a runtime concern at all
project(LaneDetection)                  # project metadata — no runtime effect

set(CMAKE_CXX_STANDARD 17)              # compile-time: which C++ language rules apply
set(CMAKE_CXX_STANDARD_REQUIRED True)   # compile-time: fail if C++17 isn't available, rather than silently downgrading

find_package(OpenCV CONFIG REQUIRED)    # build-time: locate OpenCV's compiled libraries + headers on disk
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(stage4 src/stage4.cpp src/LaneDetector.cpp)   # declares: "compile main.cpp into an exe named lane_detection"

target_link_libraries(stage4 PRIVATE ${OpenCV_LIBS})  # build-time: link the located OpenCV binaries into the exex