#include <iostream>

int main() {
    const int size = 100; 
    char arr[size];
    char* ptr = arr;

    std::cout << "Enter a string: ";
    std::cin.getline(ptr, size); 

    std::cout << "Character array values:" << std::endl;
    for (int i = 0; ptr[i] != '\0'; ++i) {
        std::cout << "Value at index " << i << ": " << *(ptr + i) << std::endl;
    }

    return 0;
}
