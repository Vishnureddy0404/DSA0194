#include <iostream>
using namespace std;
int main() {
    float num1, num2;
    std::cout << "Enter two floating-point numbers: ";
    std::cin >> num1 >> num2;
    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;
    if (num2 != 0) {
        float quotient = num1 / num2;
        std::cout << "Division: " << quotient << std::endl;
    } else {
        std::cout << "Division: Cannot divide by zero." << std::endl;
    }
    std::cout << "Addition: " << sum << std::endl;
    std::cout << "Subtraction: " << difference << std::endl;
    std::cout << "Multiplication: " << product << std::endl;
    return 0;
}
