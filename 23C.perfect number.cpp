#include <iostream>
bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num && num != 0;
}
int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    if (isPerfect(number)) {
        std::cout << number << " is a perfect number." << std::endl;
    } else {
        std::cout << number << " is not a perfect number." << std::endl;
    }
    return 0;
}
