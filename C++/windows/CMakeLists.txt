cmake_minimum_required(VERSION 3.7)
project(HoGPeopleDetector)

set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)

set(SOURCE_FILES test.cpp)
add_executable(HoGPeopleDetector ${SOURCE_FILES})

target_link_libraries(HoGPeopleDetector ${OpenCV_LIBS} "-static")
