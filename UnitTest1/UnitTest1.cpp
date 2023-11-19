#include "pch.h"
#include "CppUnitTest.h"
#include "../PR19/PR19.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(SequenceTest)
    {
    public:



        TEST_METHOD(TestMethod2) {
            int n = 5;
            double a = 2.0;

            
            double expectedValue = -1.2; 

            
            Assert::AreEqual(sequence(n, a), expectedValue);
        }