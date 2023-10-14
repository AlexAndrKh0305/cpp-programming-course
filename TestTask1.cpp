#include <iostream>
#include <cmath>
#include <windows.h>

int Myroot(double a, double b, double c, double &x1, double &x2) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        x1 = (-b - std::sqrt(discriminant)) / (2 * a);
        x2 = (-b + std::sqrt(discriminant)) / (2 * a);
        return 1;
    } else if (discriminant == 0) {
        x1 = -b / (2 * a);
        x2 = x1;
        return 0;
    }
    return -1;
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double a, b, c;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;

    double x1, x2;
    int result = Myroot(a, b, c, x1, x2);

    switch (result) {
        case 1:
            std::cout << x1 << ", x2 = " << x2 << std::endl;
            break;
        case 0:
            std::cout << "x1 = x2 = " << x1 << std::endl;
            break;
        case -1:
            std::cout << "No roots!" << std::endl;
            break;
    }
    return 0;
}
