#include "TestSuite.hpp"

TEST(StandardLib, SquareRoot)
{
	int number = 4;
	int attempt = (int)std::sqrt(number);
	int sqrtOfFour = 2;

	EXPECT(attempt, == , sqrtOfFour);
}
TEST(StandardLib, AbsoluteValue)
{
	int absOfThree = std::abs(-3);

	EXPECT(absOfThree, == , 3);
	EXPECT(absOfThree, == , 3);
	EXPECT(absOfThree, == , 3);
}
TEST(StandardLib, AbsoluteValue2)//failing test!
{
	//int absOfThree = std::abs(-4);

	//EXPECT(absOfThree, == , 3);
	//EXPECT(absOfThree, == , 3);
	//EXPECT(absOfThree, == , 3);
}
