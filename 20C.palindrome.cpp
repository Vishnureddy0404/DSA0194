#include <iostream>
bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    if (num < 0) {
        return false; 
    }
    while (num > 0) {
        int digit = num % 10;         
        reversedNum = reversedNum * 10 + digit;
        num /= 10;                   
    }
    return originalNum == reversedNum;
}
int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    if (isPalindrome(number)) {
        std::cout << number << " is a palindrome." << std::endl;
    } else {
        std::cout << number << " is not a palindrome." << std::endl;
    }
    return 0;
}
