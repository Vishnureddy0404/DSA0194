#include <iostream>
#include <cmath>
double area(double side) {
    return side * side;
}
double area(double length, double width) {
    return length * width;
}
double area(double radius, bool isCircle) {
    return M_PI * radius * radius; 
}
int main() {
    double squareSide = 5.0;
    double rectangleLength = 4.0;
    double rectangleWidth = 6.0;
    double circleRadius = 3.0;
    double squareArea = area(squareSide);
    double rectangleArea = area(rectangleLength, rectangleWidth);
    double circleArea = area(circleRadius, true); 
    std::cout << "Area of Square: " << squareArea << std::endl;
    std::cout << "Area of Rectangle: " << rectangleArea << std::endl;
    std::cout << "Area of Circle: " << circleArea << std::endl;
    return 0;
}
