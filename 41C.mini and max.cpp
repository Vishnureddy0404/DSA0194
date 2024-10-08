#include <iostream>
#include <limits>

void findMinMax(const int arr[], int size, int& min, int& max) {
    if (size <= 0) {
        std::cerr << "Array size must be greater than 0." << std::endl;
        return;
    }
    min = std::numeric_limits<int>::max();
    max = std::numeric_limits<int>::min(); 
    for (int i = 0; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
}

int main() {
    int arr[] = {3, 5, 1, 8, -2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;
    findMinMax(arr, size, min, max);
    std::cout << "Minimum element: " << min << std::endl;
    std::cout << "Maximum element: " << max << std::endl;
    return 0;
}
