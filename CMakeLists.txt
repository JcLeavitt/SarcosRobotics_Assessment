cmake_minimum_required(VERSION 3.14)
project(SarcosRoboticsAssesment)

# Set c++ compiler to g++-5.0
# set(CMAKE_CXX_COMPILER /usr/bin/g++-11)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Add source files
set(SOURCES
    main.cpp
    Node.cpp
    Mat33.cpp
    Vec3.cpp
)

# Add header files
set(HEADERS
    Node.h
    Mat33.h
    Vec3.h
)

# Add executable
add_executable(SarcosRoboticsAssesment ${SOURCES} ${HEADERS})