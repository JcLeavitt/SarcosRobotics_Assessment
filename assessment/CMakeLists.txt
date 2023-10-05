# BUILD_TESTING variable is created by include(CTest)
# It is set to ON by default
if (BUILD_TESTING)

    # Add the source files
    set(SOURCES
    SarcosRoboticsAssessment_Tests.cpp
    Mat33.cpp
    Vec3.cpp
    Node.cpp
    )

    # Add the header files
    set(HEADERS
    Mat33.h
    Vec3.h
    Node.h
    )

    # Add test executable
    add_executable(test_runner ${SOURCES} ${HEADERS})
    target_link_libraries(test_runner PRIVATE GTest::gtest_main)

    include(GoogleTest)
    # Finds all the Google tests associated with the executable
    gtest_discover_tests(test_runner)
endif()