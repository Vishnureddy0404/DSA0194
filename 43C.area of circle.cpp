#include <iostream>
#include <cmath> 
double calculateAreaOfCircle(double radius) {
    if (radius < 0) {
        std::cerr << "Radius not be negative." << std::endl;
        return -1; 
    }
    return M_PI * radius * radius; 
}

int main() {
    double radius;
    std::cout << "Enter the radius of the circle:\n";
    std::cin >> radius;
    double area = calculateAreaOfCircle(radius);
    if (area != -1) {
        std::cout << "The area of the circle is: " << area << std::endl;
    }
    return 0;
}
