#include <iostream>
#include <cmath>
bool isNarcissistic(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = 0;
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }
    originalNum = num;
    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += std::pow(digit, digits);
        originalNum /= 10;
    }
    return sum == num;
}
int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    if (isNarcissistic(number)) {
        std::cout << number << " is a narcissistic number." << std::endl;
    } else {
        std::cout << number << " is not a narcissistic number." << std::endl;
    }
    return 0;
}
