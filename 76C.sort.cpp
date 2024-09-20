#include <iostream>
#include <algorithm> 
void sortArray(int arr[], int size) {
    std::sort(arr, arr + size);
}
void sortArray(double arr[], int size) {
    std::sort(arr, arr + size);
}

int main() {
    int intArray[] = {5, 3, 8, 1, 2};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    double doubleArray[] = {5.5, 3.3, 8.8, 1.1, 2.2};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    sortArray(intArray, intSize);
    std::cout << "Sorted Integer Array: ";
    for (int i = 0; i < intSize; i++) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;
    sortArray(doubleArray, doubleSize);
    std::cout << "Sorted Double Array: ";
    for (int i = 0; i < doubleSize; i++) {
        std::cout << doubleArray[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
