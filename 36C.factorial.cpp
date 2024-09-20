#include <iostream>
unsigned long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int num;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;
    if (num < 0) {
        std::cout << "Factorial is not defined." << std::endl;
    } else {
        std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl;
    }
    return 0;
}
