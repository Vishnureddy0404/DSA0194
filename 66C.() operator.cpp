#include <iostream>
#include <string>

class Calculator {
public:
    double operator()(double a, double b) {
        return a + b;
    }

    std::string operator()(const std::string &str1, const std::string &str2) {
        return str1 + str2;
    }
};

int main() {
    Calculator calc;
    double sum = calc(10.5, 5.5);
    std::cout << "Sum: " << sum << std::endl;
    std::string result = calc("Hello, ", "World!");
    std::cout << "Concatenated String: " << result << std::endl;
    return 0;
}
