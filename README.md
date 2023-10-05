## Build Instructions:

This project is compiled with the g++-11 compiler, specifically version 11.4.0. It uses CMake for the build system, using a minimum version of 3.14. 

### NOTE: 
If you are building from a zip file of the project, please ignore the first step and procede to navigate to the directory of the project `SarcosRobotics_Assessment-main`.

1. Clone repository:

```
git clone https://github.com/JcLeavitt/SarcosRobotics_Assessment.git
```

2. Navigate to project directory:

```
cd SarcosRobotics_Assessment
```

3. Configure build settings:

```
cmake -S . -B build
```

4. Build project:

```
cmake --build build -j 12
```

5. Run unit tests:

```
GTEST_COLOR=1 ctest --test-dir build --output-on-failure -j12
```
