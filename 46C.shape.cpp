#include <iostream>
#include <cmath>

class Shape {
protected:
    double height;
    double width;

public:
    Shape(double height, double width) : height(height), width(width) {}

    double getHeight() const { return height; }
    double getWidth() const { return width; }

    void setHeight(double height) { this->height = height; }
    void setWidth(double width) { this->width = width; }

    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(double height, double width) : Shape(height, width) {}

    double area() const override {
        return height * width;
    }

    double perimeter() const override {
        return 2 * (height + width);
    }
};

class Triangle : public Shape {
public:
    Triangle(double height, double width) : Shape(height, width) {}

    double area() const override {
        return 0.5 * height * width;
    }

    double perimeter() const override {
        double side = std::sqrt((width / 2) * (width / 2) + height * height);
        return width + 2 * side;
    }
};

int main() {
    Rectangle rect(5, 10);
    std::cout << "Rectangle Area: " << rect.area() << std::endl;
    std::cout << "Rectangle Perimeter: " << rect.perimeter() << std::endl;

    Triangle tri(5, 10);
    std::cout << "Triangle Area: " << tri.area() << std::endl;
    std::cout << "Triangle Perimeter: " << tri.perimeter() << std::endl;

    return 0;
}
