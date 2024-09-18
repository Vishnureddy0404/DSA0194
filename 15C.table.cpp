#include <iostream>
int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    std::cout << "Multiplication table for " << number << ":\n";
    for (int i = 1; i <= 10; i++) {
        std::cout << number << " x " << i << " = " << number * i << std::endl;
    }
    return 0;
}
