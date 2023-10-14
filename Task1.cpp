#include <iostream>

int main() {
    const int n = 10;
    int mas[n];

    for (int i = 0; i < n; i++) {
        std::cout << "mas[" << i << "] = ";
        std::cin >> mas[i];
    }

    int s = 0;
    for (int i = 0; i < n; i++) {
        s += mas[i];
    }

    std::cout << s;
    return 0;
}