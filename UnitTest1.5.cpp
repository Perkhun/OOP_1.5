#include "pch.h"
#include "CppUnitTest.h"
#include "..//1.5/Pair.h"
#include "..//1.5/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest15
{
	TEST_CLASS(UnitTest15)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair s;
			s.Init(1,2);
			Assert::AreEqual(s.getA(), 1);
		}
	};
}
