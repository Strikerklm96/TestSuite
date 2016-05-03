#include "TestSuite.hpp"

int main()
{
	getSuite().runAllTests();
	getSuite().results();
	getSuite().pause();
	return 0;
}



