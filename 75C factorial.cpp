#include <iostream>
unsigned long long factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Factorial is not defined for negative numbers.");
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
unsigned long long factorial(double n) {
    int intPart = static_cast<int>(n);
    return factorial(intPart); 
}

int main() {
    int intNumber;
    double floatNumber;
    std::cout << "Enter an integer to find its factorial: ";
    std::cin >> intNumber;

    std::cout << "Enter a floating-point number to find its factorial: ";
    std::cin >> floatNumber;

    try {
        unsigned long long intResult = factorial(intNumber);
        unsigned long long floatResult = factorial(floatNumber);

        std::cout << intNumber << "! = " << intResult << std::endl;
        std::cout << floatNumber << "! (using the integer part) = " << floatResult << std::endl;
    } catch (const std::invalid_argument &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
