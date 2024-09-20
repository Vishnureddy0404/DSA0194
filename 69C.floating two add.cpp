#include <iostream>
int add(int a, int b) {
    return a + b;
}
double add(double a, double b) {
    return a + b;
}

int main() {
    int int1, int2;
    double double1, double2;
    std::cout << "Enter two integers: ";
    std::cin >> int1 >> int2;
    std::cout << "Enter two floating-point numbers: ";
    std::cin >> double1 >> double2;
    int intSum = add(int1, int2);
    double doubleSum = add(double1, double2);
    std::cout << "Sum of " << int1 << " and " << int2 << " is: " << intSum << std::endl;
    std::cout << "Sum of " << double1 << " and " << double2 << " is: " << doubleSum << std::endl;

    return 0;
}
