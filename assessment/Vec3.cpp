// Vec3 struct and associated methods
#include <iostream>
#include "Vec3.h"

// default constructor
Vec3::Vec3() {
    x = 0;
    y = 0;
    z = 0;
}

// constructor
Vec3::Vec3(double a_x, double a_y, double a_z) {
    x = a_x;
    y = a_y;
    z = a_z;
}

// Pretty print the contents of the Vec3 on one line with brackets
void Vec3::prettyPrint() {
    std::cout << "[" << x << ", " << y << ", " << z << "]" << std::endl;
}

// Compute the dot product of this Vec3 and another
double Vec3::dotProduct(Vec3 a_inputVec3) {
    return x * a_inputVec3.x + y * a_inputVec3.y + z * a_inputVec3.z;
}

