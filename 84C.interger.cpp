#include <iostream>

int main() {
    int number = 42;
    int* intPtr = &number;

    std::cout << "Value of number: " << *intPtr << std::endl;
    std::cout << "Address of number: " << static_cast<void*>(intPtr) << std::endl;

    return 0;
}
