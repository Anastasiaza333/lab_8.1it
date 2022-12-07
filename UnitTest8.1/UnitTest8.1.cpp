#include "pch.h"
#include "CppUnitTest.h"
#include "../Project8.1(ітер)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81
{
	TEST_CLASS(UnitTest81)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[8] = { "jwhilef" };
			int t = Count(str);
            Assert::AreEqual(t,1);
		}
	};
}
