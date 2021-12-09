#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\source\repos\pr_8.1.2\pr_8.1.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest812
{
	TEST_CLASS(UnitTest812)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool a;
			char k[] = { "onahfhduno" };
			a = IsOrNot;
			Assert::AreEqual(a, true);
		}
	};
}
