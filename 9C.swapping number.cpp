#include <iostream>
using namespace std;
int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    std::cout << "Before swapping: a = " << a << ", b = " << b << std::endl;
    a = a ^ b;
    b = a ^ b; 
    a = a ^ b; 
    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;
    return 0;
}
