#include <iostream>

int main() {
    double number = 3.14;
    double* doublePtr = &number;

    std::cout << "Value of number: " << *doublePtr << std::endl;
    std::cout << "Address of number: " << static_cast<void*>(doublePtr) << std::endl;

    return 0;
}
