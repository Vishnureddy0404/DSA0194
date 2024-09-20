#include <iostream>

class Array {
private:
    int* arr;
    int size;

public:

    Array(int s) : size(s) {
        arr = new int[size];
    }
    ~Array() {
      
    }
    void setValue(int index, int value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        } else {
            std::cerr << "Index out of bounds" << std::endl;
        }
    }
    int& operator[](int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        } else {
            std::cerr << "Index out of bounds" << std::endl;
            exit(1);
        }
    }

    void display() const {
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    Array myArray(size);

    for (int i = 0; i < size; ++i) {
        int value;
        std::cout << "Enter value for index " << i << ": ";
        std::cin >> value;
        myArray.setValue(i, value);
    }

    std::cout << "Array elements: ";
    myArray.display();

    int index;
    std::cout << "Enter an index to access: ";
    std::cin >> index;

    std::cout << "Value at index " << index << ": " << myArray[index] << std::endl;

    return 0;
}
