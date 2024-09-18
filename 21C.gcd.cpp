#include <iostream>
int gcd(int a, int b) {
    if (b > a) {
        std::swap(a, b);
    }
    do {
        int remainder = a % b;
        a = b;
        b = remainder;
    } while (b != 0);
    return a;
}
int main() {
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;
    int result = gcd(num1, num2);
    std::cout << "The greatest common divisor of " << num1 << " and " << num2 << " is " << result << "." << std::endl;
    return 0;
}
