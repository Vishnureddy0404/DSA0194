#include <iostream>
#include <cmath> 
int absolute(int number) {
    return (number < 0) ? -number : number;
}
double absolute(double number) {
    return std::fabs(number);
}
int main() {
    int intNumber = -42;
    double floatNumber = -3.14;
    std::cout << "Absolute value of " << intNumber << " is: " << absolute(intNumber) << std::endl;
    std::cout << "Absolute value of " << floatNumber << " is: " << absolute(floatNumber) << std::endl;
    return 0;
}
