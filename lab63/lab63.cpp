#include <iostream>

void swapElements(int arr[], int n, int index = 0) {
    if (index >= n - 1) {
        return;  // Базовий випадок: якщо досягнуто останнього елемента, завершити рекурсію.
    }

    // Обміняти поточний елемент з наступним (з індексом index та index + 1).
    int temp = arr[index];
    arr[index] = arr[index + 1];
    arr[index + 1] = temp;

    // Рекурсивний виклик для наступної пари елементів.
    swapElements(arr, n, index + 2);
}

int main() {
    int n;

    std::cout << "Розмір масиву: ";
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    // Виклик рекурсивної функції для обміну елементів масиву.
    swapElements(arr, n);

    std::cout << "Модифікований масив: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;

    return 0;
}
