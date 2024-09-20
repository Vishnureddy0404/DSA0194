#include <iostream>

int main() {
    char character = 'A';

    char* charPtr = &character;

    std::cout << "Value of character: " << *charPtr << std::endl;

    std::cout << "Address of character: " << static_cast<void*>(charPtr) << std::endl;

    return 0;
}
