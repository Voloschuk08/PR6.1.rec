#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.1/PR6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 10;
			int a[size] = { 3,4,5,6,7,8,7,1,4,9 };

			int i = 0;
			int count = countElements(a, size,i );
			Assert::AreEqual(count, 8);

		}
	};
}
