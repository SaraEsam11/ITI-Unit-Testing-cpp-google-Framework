#include "pch.h"
#include "Calc.h"


//Check the addition of two integer numbers
TEST(Test_Add,Tc1) {
  EXPECT_EQ(10,sum(5,5));
  EXPECT_TRUE(true);
}

//Check the addition of two negative numbers
TEST(Test_Add, Tc2) {
	EXPECT_EQ(-10, sum(-5,-5));
	EXPECT_TRUE(true);
}

//Check the addition of one positiveand one negative number.
TEST(Test_Add, Tc3) {
	EXPECT_EQ(-5, sum(5, -10));
	EXPECT_TRUE(true);
}

//Check the subtraction of two integer numbers.
TEST(Test_sub, Tc1) {
	EXPECT_EQ(10, sub(20, 10));
	EXPECT_TRUE(true);
}

//Check the subtraction of two negative numbers.
TEST(Test_sub, Tc2) {
	EXPECT_EQ(-10 ,sub(-20,-10));
	EXPECT_TRUE(true);
}

//Check the subtraction of one negative and one positive number.
TEST(Test_sub, Tc3) {
	EXPECT_EQ(-30, sub(-20, 10));
	EXPECT_TRUE(true);
}

//Check the multiplication of two integer numbers.
TEST(Test_multi, Tc1) {
	EXPECT_EQ(10, multi(2,5));
	EXPECT_TRUE(true);
}

//Check the multiplication of two negative numbers.
TEST(Test_multi, Tc2) {
	EXPECT_EQ(10, multi(-2, -5));
	EXPECT_TRUE(true);
}

//Check the multiplication of one negative and one positive number.
TEST(Test_multi, Tc3) {
	EXPECT_EQ(-10, multi(-2, 5));
	EXPECT_TRUE(true);
}

//Check the division of two integer numbers.
TEST(Test_division, Tc1) {
	EXPECT_EQ(2,division(10, 5));
	EXPECT_TRUE(true);
}

//Check the division of two negative numbers.
TEST(Test_division, Tc2) {
	EXPECT_EQ(2, division(-10, -5));
	EXPECT_TRUE(true);
}

//Check the division of one negative and one positive number.
TEST(Test_division, Tc3) {
	EXPECT_EQ(2, division(10, -5));
	EXPECT_TRUE(true);
}


//Check the division of zero by any number.
TEST(Test_division, Tc4) {
	EXPECT_EQ(0, division(0, 10));
	EXPECT_TRUE(true);
}

//Check the power of 2.
TEST(Test_pow, Tc1) {
	EXPECT_EQ(4, pow(2));
	EXPECT_TRUE(true);
}

//Check the power by mlutiplying the num by 2.
TEST(Test_pow, Tc2) {
	EXPECT_NE(10, pow(5));
	EXPECT_TRUE(true);
}