## Build Instructions:

This project is built using the g++-11 compiler, specifically version 11.4.0.

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
