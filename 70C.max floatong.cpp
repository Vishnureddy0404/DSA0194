#include <iostream>
int max(int a, int b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

char max(char a, char b) {
    return (a > b) ? a : b;
}

int main() {
    int int1, int2;
    double double1, double2;
    char char1, char2;

    std::cout << "Enter two integers: ";
    std::cin >> int1 >> int2;

    std::cout << "Enter two floating-point numbers: ";
    std::cin >> double1 >> double2;

    std::cout << "Enter two characters: ";
    std::cin >> char1 >> char2;

    int maxInt = max(int1, int2);
    double maxDouble = max(double1, double2);
    char maxChar = max(char1, char2);

    std::cout << "Maximum of " << int1 << " and " << int2 << " is: " << maxInt << std::endl;
    std::cout << "Maximum of " << double1 << " and " << double2 << " is: " << maxDouble << std::endl;
    std::cout << "Maximum of '" << char1 << "' and '" << char2 << "' is: '" << maxChar << "'" << std::endl;

    return 0;
}
