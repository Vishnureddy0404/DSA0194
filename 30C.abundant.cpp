#include <iostream>
bool isAbundant(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    } 
    return sum > num;
}
int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    if (isAbundant(number)) {
        std::cout << number << " is an abundant number." << std::endl;
    } else {
        std::cout << number << " is not an abundant number." << std::endl;
    }

    return 0;
}
