#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int id;
    float gpa;

public:
    Student(const std::string &name, int id, float gpa)
        : name(name), id(id), gpa(gpa) {
        std::cout << "Student created: " << name << " (ID: " << id << ", GPA: " << gpa << ")" << std::endl;
    }
    ~Student() {
        std::cout << "Student destroyed: " << name << std::endl;
    }
    void display() const {
        std::cout << "Name: " << name << ", ID: " << id << ", GPA: " << gpa << std::endl;
    }
};

int main() {
    Student student1("Alice Smith", 12345, 3.9);
    student1.display();

    // The destructor will be called automatically when student1 goes out of scope
    return 0;
}
