#include <iostream>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) return false; 
    if (num <= 3) return true;  
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true; 
}
int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }
    return 0;
}
