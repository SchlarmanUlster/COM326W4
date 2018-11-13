#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestingStudent
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestCustomConstructor)
		{
			
		}

		TEST_METHOD(TestAddModuleDefault)
		{

		}

		TEST_METHOD(TestAddModuleCustom)
		{

		}

		TEST_METHOD(TestCalculateClassification)
		{

		}

		TEST_METHOD(TestDeleteModule)
		{

		}

	};
}

namespace TestingModule
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestCustomConstructor)
		{
			//Arrange
			Module test{"real class", "CS101", 5, 90};
			std::string expectedName{ "real class" };
			std::string actualName{};

			std::string expectedCode{ "CS101" };
			std::string actualCode{};

			std::string expectedCredits{ 5 };
			std::string actualCredits{};

			std::string expectedMark{ 90 };
			std::string actualMark{};

			//Act
			actualName = test.getModuleTitle();
			actualCode = test.getModuleCode();
			actualCredits = test.getModuleCreditPoints();
			actualMark = test.getModuleMark();


			//Assert
			Assert::AreEqual( expectedName , actualName );
			Assert::AreEqual(expectedCode, actualCode);
			Assert::AreEqual(expectedCredits, actualCredits);
			Assert::AreEqual(expectedMark, actualMark);
		}

		TEST_METHOD(TestGetCode)
		{
			//Arrange
			Module test{ "real class", "CS101", 5, 90 };
			std::string expectedCode{ "CS101" };
			std::string actualCode{};
			//Act
			actualCode = test.getModuleCode();
			//Assert
			Assert::AreEqual(expectedCode, actualCode);
		}

		TEST_METHOD(TestSetCode)
		{
			//Arrange
			Module test{ "real class", "CS101", 5, 90 };
			std::string expectedCode{ "CS202" };
			std::string actualCode{};
			//Act
			test.setModuleCode(expectedCode);
			actualCode = test.getModuleCode();
			//Assert
			Assert::AreEqual(expectedCode, actualCode);

		}

		TEST_METHOD(TestGetCreditPts)
		{
			//Arrange
			Module test{ "real class", "CS101", 5, 90 };
			int expectedCredits{ 5 };
			int actualCredits{};
			//Act
			actualCredits = test.getModuleCreditPoints();
			//Assert
			Assert::AreEqual(expectedCredits, actualCredits);

		}

		TEST_METHOD(TestSetCreditPts)
		{
			//Arrange
			Module test{ "real class", "CS101", 5, 90 };
			int expectedCredits{ 10 };
			int actualCredits{};
			//Act
			test.setModuleCreditPoints(expectedCredits);
			actualCredits = test.getModuleCreditPoints();
			//Assert
			Assert::AreEqual(expectedCredits, actualCredits);

		}

	};
}