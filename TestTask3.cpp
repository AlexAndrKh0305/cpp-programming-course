#include <iostream>
#include <cmath>
#include <tuple>

using Solution = std::tuple<double, double, int>;

void ShowSolution(Solution solution) {
    switch (std::get<2>(solution)) {
        case 1:
            std::cout << "x1 = " << std::get<0>(solution) <<
                ", x2 = " << std::get<1>(solution) << std::endl;
            break;
        case 0:
            std::cout << "x1 = x2 = " << std::get<0>(solution) << std::endl;
            break;
        case -1:
            std::cout << "No roots!" << std::endl;
            break;
    }
}

Solution findSolution(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    double x1, x2;
    int flag;
    if (discriminant > 0) {
        x1 = (-b - std::sqrt(discriminant)) / (2 * a);
        x2 = (-b + std::sqrt(discriminant)) / (2 * a);
        flag = 1;
    } else if (discriminant == 0) {
        x1 = -b / (2 * a);
        x2 = x1;
        flag = 0;
    } else {
        flag = -1;
    }
    Solution solution = std::make_tuple(x1, x2, flag);
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

    Solution solution = findSolution(a, b, c);
    ShowSolution(solution);

    return 0;
}
