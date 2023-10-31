#include "pch.h"
#include "CppUnitTest.h"
#include "../lab63/lab63.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(SwapElementsTest)
        {
            int arr[] = { 1, 2, 3, 4, 5, 6 };
            int n = 6;

            // Очікуємо, що після виклику функції swapElements парні та непарні елементи будуть обмінюватися.
            int expected[] = { 2, 1, 4, 3, 6, 5 };

            swapElements(arr, n);

            for (int i = 0; i < n; i++) {
                Assert::AreEqual(expected[i], arr[i]);
            }
        }

        TEST_METHOD(SwapElementsEmptyArrayTest)
        {
            int* arr = nullptr; // Вказівник на порожній масив
            int n = 0;

            // Порожній масив не повинен впливати на результат.
            swapElements(arr, n);

            // Порожній масив залишається порожнім.
            Assert::AreEqual(0, n);
        }

        TEST_METHOD(SwapElementsSingleElementTest)
        {
            int arr[] = { 42 };
            int n = 1;

            // Масив з одним елементом залишається без змін.
            int expected[] = { 42 };

            swapElements(arr, n);

            Assert::AreEqual(expected[0], arr[0]);
        }
    };
}