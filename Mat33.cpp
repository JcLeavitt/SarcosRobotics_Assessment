#include <iostream>
#include "Mat33.h"

// default constructor
Mat33::Mat33() {
    col[0] = Vec3();
    col[1] = Vec3();
    col[2] = Vec3();
}

// constructor
Mat33::Mat33(Vec3 a_col0, Vec3 a_col1, Vec3 a_col2) {
    col[0] = a_col0;
    col[1] = a_col1;
    col[2] = a_col2;
}

// Pretty print the contents of the Mat33 with each row on its own line
// Note: we do not call the prettyPrint() method of Vec3 because it would
// print each column as a row.
void Mat33::prettyPrint() {
    std::cout << "[" << col[0].x << ", " << col[1].x << ", " << col[2].x << "]" << std::endl;
    std::cout << "[" << col[0].y << ", " << col[1].y << ", " << col[2].y << "]" << std::endl;
    std::cout << "[" << col[0].z << ", " << col[1].z << ", " << col[2].z << "]" << std::endl;
}

// Compute the transpose of this Mat33 in place
void Mat33::transpose() {
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            Vec3 temp = col[i];
            col[i] = col[j];
            col[j] = temp;
        }
    }
}
