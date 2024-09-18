#include <iostream>
bool isNeon(int num) {
    int square = num * num;
    int sum = 0;
    while (square > 0) {
        sum += square % 10;
        square /= 10;
    }
    return sum == num;
}
int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    if (isNeon(number)) {
        std::cout << number << " is a neon number." << std::endl;
    } else {
        std::cout << number << " is not a neon number." << std::endl;
    }
    return 0;
}
