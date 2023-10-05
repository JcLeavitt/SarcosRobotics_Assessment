#pragma once
#include "Mat33.h"

struct Node {
    Mat33 data;
    Node* children;
    unsigned int numChildren;
    Node();
    Node(Mat33 a_data);
    void prettyPrint();
    Mat33 * deepCopy(Mat33 a_inputMat33);
};
