# Build Instructions:

1. Clone repository:
```
git clone https://github.com/JcLeavitt/SarcosRobotics_Assessment.git
```

3. Navigate to project directory:
```
cd sarcosrobotics_assessment
```

5. Configure build settings:
```
cmake -S . -B build
```

7. Build project:
```
cmake --build build -j 12
```

9. Run unit tests:
```
GTEST_COLOR=1 ctest --test-dir build --output-on-failure -j12
```
