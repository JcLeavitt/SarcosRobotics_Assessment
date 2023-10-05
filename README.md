git clone https://github.com/JcLeavitt/SarcosRobotics_Assessment.git

cmake -S . -B build
cmake --build build -j 12
GTEST_COLOR=1 ctest --test-dir build --output-on-failure -j12