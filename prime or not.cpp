#include <iostream>
int main() {
    int number, i = 2;
    bool isPrime = number > 1;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    while (isPrime && i * i <= number) {
        if (number % i == 0) isPrime = false;
        i++;
    }
    std::cout << number << (isPrime ? " is a prime number." : " is not a prime number.") << std::endl;
    return 0;
}

