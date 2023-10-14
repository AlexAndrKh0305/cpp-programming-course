#include <iostream>
#include <string>

bool isCorrectNumberString(std::string x) {
    for (auto ch : x) {
        if (ch < '0' || '9' < ch) {
            return false;
        }
    }
    return true;
}

int intFromString(std::string totalNumber) {
    int x = 0;
    for (char i : totalNumber) {
        x *= 10;
        x += (i - '0');
    }
    return x;
}

bool Input(int &a, int &b) {
    std::string aString, bString;

    std::cout << "a = ";
    std::getline(std::cin, aString);
    std::cout << "b = ";
    std::getline(std::cin, bString);

    if (isCorrectNumberString(aString) && isCorrectNumberString(bString)) {
        a = intFromString(aString);
        b = intFromString(bString);
        return true;
    }
    return false;
}

int main() {
    int a, b;
    if (!Input(a, b)) {
        std::cerr << "error";
        return 1;
    }
    int s = a + b;
    std::cout << "s = " << s << std::endl;
    return 0;
}
