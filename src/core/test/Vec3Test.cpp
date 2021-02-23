#include <gtest/gtest.h>

#include "core/Vec3.hpp"

TEST(Vec3fTest, DefaultConstructorTest)
{
    float expected = 0.0f;

    Vec3f sut;

    EXPECT_FLOAT_EQ(expected, sut.x);
    EXPECT_FLOAT_EQ(expected, sut.y);
    EXPECT_FLOAT_EQ(expected, sut.z);
}

TEST(Vec3fTest, ConstructorXYZParamsTest)
{
    float expectedX = 10.0f;
    float expectedY = -20.0f;
    float expectedZ = 30.0f;

    Vec3f sut(expectedX,
        expectedY,
        expectedZ);

    EXPECT_FLOAT_EQ(expectedX, sut.x);
    EXPECT_FLOAT_EQ(expectedY, sut.y);
    EXPECT_FLOAT_EQ(expectedZ, sut.z);

    EXPECT_FLOAT_EQ(expectedX, sut.r);
    EXPECT_FLOAT_EQ(expectedY, sut.g);
    EXPECT_FLOAT_EQ(expectedZ, sut.b);
}

TEST(Vec3fTest, CopyConstructorTest)
{
    Vec3f expected(10.0f, -20.0f, 30.0f);

    Vec3f sut(expected);

    EXPECT_EQ(expected, sut);
}

TEST(Vec3fTest, OperatorEqualTest)
{
    Vec3f other(10.0f, -20.0f, 30.0f);
    Vec3f sut;

    EXPECT_TRUE(sut == sut);
    EXPECT_FALSE(other == sut);
}

TEST(Vec3fTest, OperatorNotEqualTest)
{
    Vec3f other(1.0f, 2.0f, 3.0f);
    Vec3f sut;

    EXPECT_TRUE(other != sut);
    EXPECT_FALSE(sut != sut);
}

TEST(Vec3fTest, OperatorNotEqualXTest)
{
    Vec3f other;
    Vec3f sut;

    other.x = 1.0f;

    EXPECT_TRUE(other != sut);
}

TEST(Vec3fTest, OperatorNotEqualYTest)
{
    Vec3f other;
    Vec3f sut;

    other.y = 1.0f;

    EXPECT_TRUE(other != sut);
}

TEST(Vec3fTest, OperatorNotEqualZTest)
{
    Vec3f other;
    Vec3f sut;

    other.z = 1.0f;

    EXPECT_TRUE(other != sut);
}

TEST(Vec3fTest, OperatorAdditionTest)
{
    Vec3f expected(5.0f, -2.0f, 11.0f);
    Vec3f other(2.0f, 7.0f, -9.0f);
    Vec3f sut(3.0f, -9.0f, 20.0f);

    EXPECT_EQ(expected, sut + other);
}

TEST(Vec3fTest, OperatorAdditionAssignmentTest)
{
    Vec3f expected(5.0f, -2.0f, 11.0f);
    Vec3f other(2.0f, 7.0f, -9.0f);
    Vec3f sut(3.0f, -9.0f, 20.0f);

    EXPECT_EQ(expected, sut += other);
}

TEST(Vec3fTest, OperatorSubractionTest)
{
    Vec3f expected(1.0f, -16.0f, 29.0f);
    Vec3f other(2.0f, 7.0f, -9.0f);
    Vec3f sut(3.0f, -9.0f, 20.0f);

    EXPECT_EQ(expected, sut - other);
}

TEST(Vec3fTest, OperatorSubtractionAssignmentTest)
{
    Vec3f expected(1.0f, -16.0f, 29.0f);
    Vec3f other(2.0f, 7.0f, -9.0f);
    Vec3f sut(3.0f, -9.0f, 20.0f);

    EXPECT_EQ(expected, sut -= other);
}

TEST(Vec3fTest, OperatorScalarAdditionTest)
{
    Vec3f expected(16.0f, 4.0f, 33.0f);
    float other = 13.0f;
    Vec3f sut(3.0f, -9.0f, 20.0f);

    EXPECT_EQ(expected, sut + other);
}

TEST(Vec3fTest, OperatorScalarAdditionAssignmentTest)
{
    Vec3f expected(20.0f, 8.0f, 37.0f);
    float other = 17.0f;
    Vec3f sut(3.0f, -9.0f, 20.0f);

    EXPECT_EQ(expected, sut += other);
}

TEST(Vec3fTest, OperatorScalarSubtractionTest)
{
    Vec3f expected(-10.0f, -22.0f, 7.0f);
    float other = 13.0f;
    Vec3f sut(3.0f, -9.0f, 20.0f);

    EXPECT_EQ(expected, sut - other);
}

TEST(Vec3fTest, OperatorScalarSubtractionAssignmentTest)
{
    Vec3f expected(-14.0f, -26.0f, 3.0f);
    float other = 17.0f;
    Vec3f sut(3.0f, -9.0f, 20.0f);

    EXPECT_EQ(expected, sut -= other);
}

TEST(Vec3fTest, OperatorScalarMultiplicationTest)
{
    Vec3f expected(39.0f, -117.0f, 260.0f);
    float other = 13.0f;
    Vec3f sut(3.0f, -9.0f, 20.0f);

    EXPECT_EQ(expected, sut * other);
}

TEST(Vec3fTest, OperatorScalarMultiplicationAssignmentTest)
{
    Vec3f expected(51.0f, -153.0f, 340.0f);
    float other = 17.0f;
    Vec3f sut(3.0f, -9.0f, 20.0f);

    EXPECT_EQ(expected, sut *= other);
}

TEST(Vec3fTest, OperatorScalarDivisionTest)
{
    Vec3f expected(0.23076923f, -0.69230769f, 1.53846153f);
    float other = 13.0f;
    Vec3f sut(3.0f, -9.0f, 20.0f);

    EXPECT_EQ(expected, sut / other);
}

TEST(Vec3fTest, OperatorScalarDivisionAssignmentTest)
{
    Vec3f expected(0.17647058f, -0.52941176f, 1.17647058f);
    float other = 17.0f;
    Vec3f sut(3.0f, -9.0f, 20.0f);

    EXPECT_EQ(expected, sut /= other);
}

TEST(Vec3fTest, GetterTest)
{
    float expectedX = 0.17647058f;
    float expectedY = -0.52941176f;
    float expectedZ = 1.17647058f;
    Vec3f sut(expectedX, expectedY, expectedZ);

    EXPECT_FLOAT_EQ(expectedX, sut.x);
    EXPECT_FLOAT_EQ(expectedY, sut.y);
    EXPECT_FLOAT_EQ(expectedZ, sut.z);

    EXPECT_FLOAT_EQ(expectedX, sut.r);
    EXPECT_FLOAT_EQ(expectedY, sut.g);
    EXPECT_FLOAT_EQ(expectedZ, sut.b);
}

TEST(Vec3fTest, SetterTest)
{
    float expectedX = 0.17647058f;
    float expectedY = -0.52941176f;
    float expectedZ = 1.17647058f;
    Vec3f sut1;
    Vec3f sut2;
    
    sut1.x = expectedX;
    sut1.y = expectedY;
    sut1.z = expectedZ;

    sut2.r = expectedX;
    sut2.g = expectedY;
    sut2.b = expectedZ;

    EXPECT_FLOAT_EQ(expectedX, sut1.x);
    EXPECT_FLOAT_EQ(expectedY, sut1.y);
    EXPECT_FLOAT_EQ(expectedZ, sut1.z);

    EXPECT_FLOAT_EQ(expectedX, sut2.x);
    EXPECT_FLOAT_EQ(expectedY, sut2.y);
    EXPECT_FLOAT_EQ(expectedZ, sut2.z);
}

TEST(Vec3fTest, DotProductTest)
{
    float expected = 490.0f;
    Vec3f sut(3.0f, -9.0f, 20.0f);

    EXPECT_FLOAT_EQ(expected, sut.dot(sut));
}

TEST(Vec3fTest, CrossProductTest)
{
    Vec3f expected(-385.5f, -168.5f, -18.0f);
    Vec3f other(-7.0f, 15.0f, 9.5f);
    Vec3f sut(3.0f, -9.0f, 20.0f);

    EXPECT_EQ(expected, sut.cross(other));
}

TEST(Vec3fTest, MagnitudeTest)
{
    float expected = std::sqrtf(490.0f);
    Vec3f sut(3.0f, -9.0f, 20.0f);

    EXPECT_FLOAT_EQ(expected, sut.mag());
}

TEST(Vec3fTest, NormalizeTest)
{
    Vec3f expected(3.0f / 22.13594362, 
        -9.0f /22.13594362, 
        20 / 22.13594362);
    Vec3f sut(3.0f, -9.0f, 20.0f);

    sut.normalize();

    EXPECT_EQ(expected, sut);
}

TEST(Vec3fTest, DotProductFreeFunctionTest)
{
    float expected = 490.0f;
    Vec3f a(3.0f, -9.0f, 20.0f);
    Vec3f b(3.0f, -9.0f, 20.0f);

    EXPECT_FLOAT_EQ(expected, dot(a, b));
}

TEST(Vec3fTest, CrossProductFreeFunctionTest)
{
    Vec3f expected(-385.5f, -168.5f, -18.0f);
    Vec3f a(3.0f, -9.0f, 20.0f);
    Vec3f b(-7.0f, 15.0f, 9.5f);

    EXPECT_EQ(expected, cross(a, b));
}

TEST(Vec3fTest, MagnitudeFreeFunctionTest)
{
    float expected = std::sqrtf(490.0f);
    Vec3f a(3.0f, -9.0f, 20.0f);

    EXPECT_FLOAT_EQ(expected, mag(a));
}

TEST(Vec3fTest, NormalizeFreeFunctionTest)
{
    Vec3f expected(3.0f / 22.13594362, 
        -9.0f /22.13594362, 
        20 / 22.13594362);
    Vec3f a(3.0f, -9.0f, 20.0f);

    EXPECT_EQ(expected, normalize(a));
}