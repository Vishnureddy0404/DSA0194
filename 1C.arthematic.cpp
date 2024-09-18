#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    if (num2 != 0) {
        float quotient = static_cast<float>(num1) / num2; 
        std::cout << "Division: " << quotient << std::endl;
    } else {
        std::cout << "Division: Cannot divide by zero." << std::endl;
    }
    if (num2 != 0) {
        int modulo = num1 % num2;
        std::cout << "Modulo: " << modulo << std::endl;
    } else {
        std::cout << "Modulo: Cannot perform modulo by zero." << std::endl;
    }
    std::cout << "Addition: " << sum << std::endl;
    std::cout << "Subtraction: " << difference << std::endl;
    std::cout << "Multiplication: " << product << std::endl;
    return 0;
}
