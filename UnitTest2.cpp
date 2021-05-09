#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_lab_4.4/Equilateral.cpp"
#include "../oop_lab_4.4/Equilateral.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My44f
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestPerimeter)
		{
			Equilateral e(10, 10, 60);
			Assert::AreEqual(30., e.Perimeter(), 0.1);
		}
	};
}
