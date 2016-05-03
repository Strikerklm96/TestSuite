#include "TestSuite.hpp"

TEST(MyClassName, MyFunctionality)
{
	std::string s = "hi";
	std::string real = "hi";
	EXPECT(s, == , real);
}
