#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.5/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int m = 10;
			int x = 1;
			int y = 2;
			int z = 3;
			vector<int> memo(m + 1, -1);


			countWays(m, x, y, z, memo);



			Assert::AreEqual(5, 5);



		}
	};
}
