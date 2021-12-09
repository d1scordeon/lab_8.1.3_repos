#include "pch.h"
#include "CppUnitTest.h"
#include "../pr_8.1.2/pr_8.1.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest813
{
	TEST_CLASS(UnitTest813)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool a;
			char k[] = { "noabc" };
			a = IsOrNot(k, 0);
			Assert::AreEqual(a, true);
		}
	};
}
