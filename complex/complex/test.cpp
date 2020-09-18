#include "pch.h"

TEST(complex, ptest) {
	 
	complex temp(1,2), temp2(3,4);
		
	complex result= temp+temp2;
  EXPECT_EQ(4,result.real);
  EXPECT_EQ(6,result.img);
}
TEST(complex, mtest) {

	complex temp(1, 2), temp2(3, 4);

	complex result = temp * temp2;
	EXPECT_EQ(-5, result.real);
	EXPECT_EQ(11, result.img);
}
TEST(complex, stest) {

	complex temp(1, 2), temp2(3, 4);

	complex result = temp - temp2;
	EXPECT_EQ(2, result.real);
	EXPECT_EQ(2, result.img);
}