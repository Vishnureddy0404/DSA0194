#include <iostream>

int main() {
    const int size = 5;
    float arr[size];
    float* ptr = arr;

    std::cout << "Enter " << size << " float values:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> *(ptr + i);
    }

    std::cout << "You entered the following values:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Value at index " << i << ": " << *(ptr + i) << std::endl;
    }

    return 0;
}
