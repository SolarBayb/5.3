#include "pch.h"
#include "CppUnitTest.h"
#include "../5.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			auto tmp = h(1);
				Assert:(1, tmp);
		}
	};
}
