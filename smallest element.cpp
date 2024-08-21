#include <iostream>
int findSmallestMissing(int arr[], int size) {
    int missing = 0;
    int i = 0;     

    while (i < size) {
        if (arr[i] == missing) {
            missing++;  
        } else {
            break;   
        }
        i++;
    }
    return missing;
}
int main() {
    int size;
    std::cout << "Enter the number of elements in the sorted array: ";
    std::cin >> size;
    int arr[size];
    std::cout << "Enter the elements of the sorted array:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    int smallestMissing = findSmallestMissing(arr, size);
    std::cout << "The smallest missing element is: " << smallestMissing << std::endl;
    return 0;
}

