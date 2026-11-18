#include "pch.h"
#include "CppUnitTest.h"
#include <math.h>

#include "../Lab_9.1/var.cpp"
#include "../Lab_9.1/dod.cpp"
#include "../Lab_9.1/sum.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace nsVar;
using namespace nsSum;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			x = 0.5;
			e = 0.000000001;

			sum();

			double expected = log((1 + x) / (1 - x));
			Assert::AreEqual(expected, s, 0.00000001);
		}
	};
}
