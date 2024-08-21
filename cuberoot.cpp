#include <iostream>
#include <cmath>
int main() {
    double number, cubeRoot;
    std::cout << "Enter a number: ";
    std::cin >> number;
    cubeRoot = cbrt(number);
    if (number == 0) {
        std::cout << "The cube root of 0 is 0." << std::endl;
    } else {
        std::cout << "The cube root of " << number << " is " << cubeRoot << std::endl;
    }
    return 0;
}

