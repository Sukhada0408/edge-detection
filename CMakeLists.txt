cmake_minimum_required(VERSION 3.15) 
project(LaneDetection)                  

set(CMAKE_CXX_STANDARD 17)              
set(CMAKE_CXX_STANDARD_REQUIRED True)   

find_package(OpenCV CONFIG REQUIRED)   
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(stage4 src/main.cpp src/LaneDetector.cpp) 

target_link_libraries(stage4 PRIVATE ${OpenCV_LIBS})  
