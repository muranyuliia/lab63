#include <iostream>

void swapElements(int arr[], int n, int index = 0) {
    if (index >= n - 1) {
        return;  // ������� �������: ���� ��������� ���������� ��������, ��������� �������.
    }

    // ������� �������� ������� � ��������� (� �������� index �� index + 1).
    int temp = arr[index];
    arr[index] = arr[index + 1];
    arr[index + 1] = temp;

    // ����������� ������ ��� �������� ���� ��������.
    swapElements(arr, n, index + 2);
}

int main() {
    int n;

    std::cout << "����� ������: ";
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "������ �������� ������: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    // ������ ���������� ������� ��� ����� �������� ������.
    swapElements(arr, n);

    std::cout << "������������� �����: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;

    return 0;
}
