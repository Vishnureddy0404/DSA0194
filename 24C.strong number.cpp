#include <iostream>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
bool isStrong(int num) {
    int originalNum = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return sum == originalNum;
}
int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    if (isStrong(number)) {
        std::cout << number << " is a strong number." << std::endl;
    } else {
        std::cout << number << " is not a strong number." << std::endl;
    }
    return 0;
}
