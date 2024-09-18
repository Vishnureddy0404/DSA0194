#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;
    std::cout << "Enter the third integer: ";
    std::cin >> num3;
    int max = (num1 >= num2) 
                ? (num1 >= num3 ? num1 : num3) 
                : (num2 >= num3 ? num2 : num3);
    std::cout << "The maximum number is: " << max << std::endl;
    return 0;
}
