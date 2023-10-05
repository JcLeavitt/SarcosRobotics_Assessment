#include "Node.h"
#include <iostream>

// default constructor
Node::Node() {
    data = Mat33();
    children = nullptr;
    numChildren = 0;
}

// constructor
Node::Node(Mat33 a_data) {
    data = a_data;
    children = nullptr;
    numChildren = 0;
}

// Pretty prints the current Node followed by each of its children
void Node::prettyPrint() {
    std::cout << "Root Node:" << std::endl;
    data.prettyPrint();
    for (int i = 0; i < numChildren; i++) {
        std::cout << "Child " << i << ":" << std::endl;
        children[i].prettyPrint();
    }
}

// Creates a deep copy of the a_inputMat33 argument and returns a pointer to it
Mat33 * Node::deepCopy(Mat33 a_inputMat33) {
    Vec3 col0(a_inputMat33.col[0].x, a_inputMat33.col[0].y, a_inputMat33.col[0].z);
    Vec3 col1(a_inputMat33.col[1].x, a_inputMat33.col[1].y, a_inputMat33.col[1].z);
    Vec3 col2(a_inputMat33.col[2].x, a_inputMat33.col[2].y, a_inputMat33.col[2].z);
    return new Mat33(col0, col1, col2);
}