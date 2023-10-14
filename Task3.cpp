#include <iostream>
#include <windows.h>

void showArray(const int Arr[], const int N) {
    for (int i = 0; i < N; i++) {
        std::cout << Arr[i] << " ";
    }
    std::cout << "\n";
}

bool fromMin(const int a, const int b) {
    return a > b;
}

bool fromMax(const int a, const int b) {
    return a < b;
}

void bubbleSort(int Arr[], const int N, bool (*compare)(int a, int b)) {
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            if ((*compare)(Arr[j], Arr[j + 1])) {
                std::swap(Arr[j], Arr[j + 1]);
            }
        }
    }
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    bool (*fromF[2])(int, int) = { fromMin, fromMax };

    const int N = 10;
    int myChoice = 0;
    int A[N] = { 9, 8, 7, 6, 1, 2, 3, 5, 4, 9 };

    std::cout << "1. Сортировать по возрастанию\n";
    std::cout << "2. Сортировать по убыванию\n";
    std::cin >> myChoice;

    std::cout << "Исходные данные: ";
    showArray(A, N);

    bubbleSort(A, N, fromF[myChoice - 1]);

    showArray(A, N);

    return 0;
}
