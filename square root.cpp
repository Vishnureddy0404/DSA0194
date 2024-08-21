#include <iostream>
#include <cmath>
int main() {
    double number, squareRoot;
    std::cout << "Enter a number: ";
    std::cin >> number;
    if (number < 0) {
        std::cout << "Square root of a negative number is not a real number." << std::endl;
    } else {
        squareRoot = sqrt(number);
        std::cout << "Square root of " << number << " is " << squareRoot << std::endl;
    }
    return 0;
}

