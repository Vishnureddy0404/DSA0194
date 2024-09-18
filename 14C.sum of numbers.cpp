#include <iostream>
int main() {
    int sum = 0; 
    for (int i = 1; i <= 10; ++i) {
        std::cout << i << std::endl; 
        sum += i; 
    }
    std::cout << "Sum of numbers from 1 to 10 is: " << sum << std::endl;
    return 0;
}
