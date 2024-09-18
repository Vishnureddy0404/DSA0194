#include <iostream>
bool isBuzz(int num) {
    return (num % 7 == 0) || (num % 10 == 7);
}
int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    if (isBuzz(number)) {
        std::cout << number << " is a buzz number." << std::endl;
    } else {
        std::cout << number << " is not a buzz number." << std::endl;
    }
    return 0;
}
