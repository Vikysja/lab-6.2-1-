#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest621
{
	TEST_CLASS(UnitTest621)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 10;
			int a[size];
			Create(a, size, 10);
			int s = arraySize(a);
			Assert::AreEqual(size, s, 0.01);
		}
	};
}
