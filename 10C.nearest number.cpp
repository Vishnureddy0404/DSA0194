#include <iostream>
#include <cmath>
int main() {
    float number;
    std::cout << "Enter a floating-point number: ";
    std::cin >> number;
    int nearestInteger = (std::abs(number - std::floor(number)) < 0.5) 
                         ? static_cast<int>(std::floor(number)) 
                         : static_cast<int>(std::ceil(number));
    std::cout << "Nearest integer: " << nearestInteger << std::endl;
    return 0;
}
