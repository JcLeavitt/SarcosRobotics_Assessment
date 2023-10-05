// Must include the gtest header to use the testing library
#include <gtest/gtest.h>
#include "Vec3.h"
#include "Mat33.h"
#include "Node.h"

TEST(TestVec3, DotProduct_Success) {
	Vec3 a(1.0, 2.0, 3.0);
	Vec3 b(4.0, 5.0, 6.0);
	EXPECT_FLOAT_EQ(a.dotProduct(b), 32.0);
}

TEST(TestVec3, DotProduct_Failure) {
	Vec3 a(1.0, 2.0, 3.0);
	Vec3 b(4.0, 5.0, 6.0);
	EXPECT_FALSE(a.dotProduct(b) == 30.0);
}

TEST(TestMat33, Transpose_Success) {
	Mat33 a(Vec3(1.0, 2.0, 3.0), Vec3(4.0, 5.0, 6.0), Vec3(7.0, 8.0, 9.0));
	a.transpose();
	// check col0
	EXPECT_FLOAT_EQ(a.col[0].x, 1.0);
	EXPECT_FLOAT_EQ(a.col[0].y, 4.0);
	EXPECT_FLOAT_EQ(a.col[0].z, 7.0);

	// check col1
	EXPECT_FLOAT_EQ(a.col[1].x, 2.0);
	EXPECT_FLOAT_EQ(a.col[1].y, 5.0);
	EXPECT_FLOAT_EQ(a.col[1].z, 8.0);

	// check col2
	EXPECT_FLOAT_EQ(a.col[2].x, 3.0);
	EXPECT_FLOAT_EQ(a.col[2].y, 6.0);
	EXPECT_FLOAT_EQ(a.col[2].z, 9.0);
}

TEST(TestMat33, Transpose_Failure) {
	Mat33 a(Vec3(1.0, 2.0, 3.0), Vec3(4.0, 5.0, 6.0), Vec3(7.0, 8.0, 9.0));
	a.transpose();
	// check col0
	EXPECT_FLOAT_EQ(a.col[0].x, 1.0);
	EXPECT_FALSE(a.col[0].y == 2.0);
	EXPECT_FALSE(a.col[0].z == 3.0);

	// check col1
	EXPECT_FALSE(a.col[1].x == 4.0);
	EXPECT_FLOAT_EQ(a.col[1].y, 5.0);
	EXPECT_FALSE(a.col[1].z == 6.0);

	// check col2
	EXPECT_FALSE(a.col[2].x == 7.0);
	EXPECT_FALSE(a.col[2].y == 8.0);
	EXPECT_FLOAT_EQ(a.col[2].z, 9.0);
}

TEST(TestNode, DeepCopy_Success) {
	Node a(Mat33(Vec3(1.0, 2.0, 3.0), Vec3(4.0, 5.0, 6.0), Vec3(7.0, 8.0, 9.0)));
	Mat33 * b = a.deepCopy(a.data);

	EXPECT_FLOAT_EQ(a.data.col[0].x, b->col[0].x);
	EXPECT_FLOAT_EQ(a.data.col[0].y, b->col[0].y);
	EXPECT_FLOAT_EQ(a.data.col[0].z, b->col[0].z);
	EXPECT_FLOAT_EQ(a.data.col[1].x, b->col[1].x);
	EXPECT_FLOAT_EQ(a.data.col[1].y, b->col[1].y);
	EXPECT_FLOAT_EQ(a.data.col[1].z, b->col[1].z);
	EXPECT_FLOAT_EQ(a.data.col[2].x, b->col[2].x);
	EXPECT_FLOAT_EQ(a.data.col[2].y, b->col[2].y);
	EXPECT_FLOAT_EQ(a.data.col[2].z, b->col[2].z);
	delete b;
}

TEST(TestNode, DeepCopy_Failure) {
	Node a(Mat33(Vec3(1.0, 2.0, 3.0), Vec3(4.0, 5.0, 6.0), Vec3(7.0, 8.0, 9.0)));
	Mat33 * b = a.deepCopy(a.data);
	a.data.col[0] = Vec3(2.0, 3.0, 4.0);
	a.data.col[1] = Vec3(5.0, 6.0, 7.0);
	a.data.col[2] = Vec3(8.0, 9.0, 10.0);

	EXPECT_FALSE(a.data.col[0].x == b->col[0].x);
	EXPECT_FALSE(a.data.col[0].y == b->col[0].y);
	EXPECT_FALSE(a.data.col[0].z == b->col[0].z);
	EXPECT_FALSE(a.data.col[1].x == b->col[1].x);
	EXPECT_FALSE(a.data.col[1].y == b->col[1].y);
	EXPECT_FALSE(a.data.col[1].z == b->col[1].z);
	EXPECT_FALSE(a.data.col[2].x == b->col[2].x);
	EXPECT_FALSE(a.data.col[2].y == b->col[2].y);
	EXPECT_FALSE(a.data.col[2].z == b->col[2].z);
	delete b;
}