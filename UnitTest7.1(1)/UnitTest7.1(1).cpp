#include "pch.h"
#include "CppUnitTest.h"
#include "../lab7.1/lab7.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest711
{
	TEST_CLASS(UnitTest711)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s[1] = { 1 };
			int** r = new int* [5];
			for (int i = 0; i < 5; i++)
				r[i] = new int[5];
			Create(r, 5, 5, 1, 1);
			int t = r[1][1];
		}
	};
}
