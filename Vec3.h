#pragma once

struct Vec3 {
    double x, y, z;
    Vec3();
    Vec3(double a_x, double a_y, double a_z);
    double dotProduct(Vec3 a_inputVec3);
    void prettyPrint();
};