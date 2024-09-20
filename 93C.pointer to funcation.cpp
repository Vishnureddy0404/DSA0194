#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*funcPtr)(int, int) = &add;
    int result = funcPtr(5, 3);
    std::cout << "The result of adding 5 and 3 is: " << result << std::endl;
    return 0;
}
