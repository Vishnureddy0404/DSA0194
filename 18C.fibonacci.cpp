#include <iostream>
int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    int a = 0, b = 1;
    std::cout << "Fibonacci series up to " << n << ": ";
    for (int i = 0; a <= n; i++) {
        std::cout << a << " "; 
        int next = a + b;      
        a = b;                 
        b = next;              
    }
    std::cout << std::endl;
    return 0;
}
