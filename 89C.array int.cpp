#include <iostream>

int main() {
    const int size = 5;
    int arr[size];
    int* ptr = arr;

    std::cout << "Enter " << size << " integer values:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> *(ptr + i);
    }

    std::cout << "Integer array values:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Value at index " << i << ": " << *(ptr + i) << std::endl;
    }

    return 0;
}
