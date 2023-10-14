#include <iostream>
#include <cmath>

struct Solution {
    double x1;
    double x2;
    int flag;

    void ShowSolution() {
        switch (flag) {
            case 1:
                std::cout << "x1 = " << x1 << ", x2 = " << x2 << std::endl;
                break;
            case 0:
                std::cout << "x1 = x2 = " << x1 << std::endl;
                break;
            case -1:
                std::cout << "No roots!" << std::endl;
                break;
        }
    }
};

Solution findRoots(double a, double b, double c) {
    Solution solution;
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        solution.x1 = (-b - std::sqrt(discriminant)) / (2 * a);
        solution.x2 = (-b + std::sqrt(discriminant)) / (2 * a);
        solution.flag = 1;
    } else if (discriminant == 0) {
        solution.x1 = -b / (2 * a);
        solution.x2 = solution.x1;
        solution.flag = 0;
    } else {
        solution.flag = -1;
    }
    return solution;
}

int main() {

    double a, b, c;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;

    Solution solution = findRoots(a, b, c);
    solution.ShowSolution();

    return 0;
}
