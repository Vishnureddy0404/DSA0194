#include <iostream>
int main() {
    int number, sum = 0;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    number = abs(number);
    while (number > 0) {
        sum += number % 10; 
        number /= 10;       
    }
    std::cout << "The sum of the digits is: " << sum << std::endl;
    return 0;
}
