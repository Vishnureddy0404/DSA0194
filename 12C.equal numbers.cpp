#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;
    std::cout << (num1 == num2 ? "The numbers are equal." : "The numbers are not equal.") << std::endl;

    return 0;
}
