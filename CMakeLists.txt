cmake_minimum_required(VERSION 3.14)
project(SarcosRoboticsAssesment
    VERSION 0.0.1
    DESCRIPTION "Sarcos Robotics Assesment"
    LANGUAGES CXX
)

# Update the submodules here
include(cmake/UpdateSubmodules.cmake)

# Enable Testing
include(CTest)

# Add subdirectories
add_subdirectory(external)
add_subdirectory(assessment)