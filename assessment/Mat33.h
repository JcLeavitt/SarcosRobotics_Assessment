#pragma once
#include "Vec3.h"

struct Mat33 {
  Vec3 col[3];
  Mat33();
  Mat33(Vec3 a_col0, Vec3 a_col1, Vec3 a_col2);
  void prettyPrint();
  void transpose();
};