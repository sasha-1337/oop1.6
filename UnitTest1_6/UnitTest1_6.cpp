#include "pch.h"
#include "CppUnitTest.h"
#include "../oop1.6/Long.h"
#include "D:\Student\oop1.6\oop1.6\Long.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest16
{
	TEST_CLASS(UnitTest16)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Long a;
			int t;
			t = a.Multiply_1(1, 2);
		}
	};
}