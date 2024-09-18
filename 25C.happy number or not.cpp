#include <iostream>
#include <unordered_set>
int sumOfSquares(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}
bool isHappy(int num) {
    std::unordered_set<int> seenNumbers;
    while (num != 1 && seenNumbers.find(num) == seenNumbers.end()) {
        seenNumbers.insert(num);
        num = sumOfSquares(num);
    }
    return num == 1;
}
int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    if (isHappy(number)) {
        std::cout << number << " is a happy number." << std::endl;
    } else {
        std::cout << number << " is not a happy number." << std::endl;
    }
    return 0;
}
