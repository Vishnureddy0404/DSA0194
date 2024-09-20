#include <iostream>

class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    Point& operator+=(const Point& other) {
        x += other.x;
        y += other.y;
        return *this;
    }

    void display() const {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Point p1(3, 4);
    Point p2(1, 2);

    std::cout << "Initial Points:" << std::endl;
    p1.display();
    p2.display();
    p1 += p2; 
    std::cout << "After using p1 += p2:" << std::endl;
    p1.display();

    return 0;
}
