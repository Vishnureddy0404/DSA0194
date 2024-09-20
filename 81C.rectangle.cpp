#include <iostream>
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {
        std::cout << "Rectangle created: Length = " << length << ", Width = " << width << std::endl;
    }
    ~Rectangle() {
        std::cout << "Rectangle destroyed." << std::endl;
    }
    double area() const {
        return length * width;
    }
    void displayInfo() const {
        std::cout << "Rectangle Info: Length = " << length << ", Width = " << width 
                  << ", Area = " << area() << std::endl;
    }
};
int main() {
    Rectangle myRectangle(5.0, 7.0);
    myRectangle.displayInfo();
    return 0;
}
