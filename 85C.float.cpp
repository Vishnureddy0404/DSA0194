#include <iostream>

int main() {
    float number = 5.67f;
    float* floatPtr = &number;

    std::cout << "Value of number: " << *floatPtr << std::endl;
    std::cout << "Address of number: " << static_cast<void*>(floatPtr) << std::endl;

    return 0;
}
