#include <iostream>
#include <cmath>
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

double power(double base, int exponent) {
    return std::pow(base, exponent);
}

int main() {
    int intBase, intExponent;
    double doubleBase;
    int doubleExponent;
    std::cout << "Enter an integer base and exponent: ";
    std::cin >> intBase >> intExponent;
    std::cout << "Enter a floating-point base and integer exponent: ";
    std::cin >> doubleBase >> doubleExponent;
    int intResult = power(intBase, intExponent);
    double doubleResult = power(doubleBase, doubleExponent);
    std::cout << intBase << "^" << intExponent << " = " << intResult << std::endl;
    std::cout << doubleBase << "^" << doubleExponent << " = " << doubleResult << std::endl;

    return 0;
}
