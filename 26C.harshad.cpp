#include <iostream>
bool isHarshad(int num) {
    int sum = 0;
    int originalNum = num;
    while (num > 0) {
        sum += num % 10; 
        num /= 10;       
    }
    return (originalNum % sum == 0);
}

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    if (isHarshad(number)) {
        std::cout << number << " is a Harshad number." << std::endl;
    } else {
        std::cout << number << " is not a Harshad number." << std::endl;
    }
    return 0;
}
