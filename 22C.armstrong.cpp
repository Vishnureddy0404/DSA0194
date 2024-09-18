#include <iostream>
#include <cmath>
bool isArmstrong(int num) {
    int sum = 0, originalNum = num, digits = 0;
    while (originalNum > 0) {
        originalNum /= 10;
        digits++;
    }
    originalNum = num;
    while (originalNum > 0) {
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
    if (isArmstrong(number)) {
        std::cout << number << " is an Armstrong number." << std::endl;
    } else {
        std::cout << number << " is not an Armstrong number." << std::endl;
    }
    return 0;
}
