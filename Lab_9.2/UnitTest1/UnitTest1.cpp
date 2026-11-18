#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_9.2/macros.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 1, y = 3;

			double w1 = MAX(SQR(x - y), ABS(y - x));   // z = 1:  max(4, 2) = 4
			double w2 = MIN(x + SQR(y), 2 + SQR(x));   // z = 2:  min(10, 3) = 3

			Assert::AreEqual(4.0, w1);
			Assert::AreEqual(3.0, w2);
		}
	};
}
