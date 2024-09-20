#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    Complex operator-(const Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }

    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    double real1, imag1, real2, imag2;

    std::cout << "Enter the real part of the first complex number: ";
    std::cin >> real1;
    std::cout << "Enter the imaginary part of the first complex number: ";
    std::cin >> imag1;

    std::cout << "Enter the real part of the second complex number: ";
    std::cin >> real2;
    std::cout << "Enter the imaginary part of the second complex number: ";
    std::cin >> imag2;

    Complex c1(real1, imag1);
    Complex c2(real2, imag2);

    std::cout << "First Complex Number: ";
    c1.display();

    std::cout << "Second Complex Number: ";
    c2.display();

    Complex result = c1 - c2; 

    std::cout << "Result of subtraction: ";
    result.display();

    return 0;
}
