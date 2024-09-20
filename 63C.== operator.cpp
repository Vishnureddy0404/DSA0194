#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;

public:
    Student(std::string n, int a) : name(n), age(a) {}

    bool operator==(const Student& other) const {
        return (name == other.name && age == other.age);
    }

    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Student student1("Alice", 20);
    Student student2("Bob", 22);
    Student student3("Alice", 20);

    std::cout << "Student 1: ";
    student1.display();
    std::cout << "Student 2: ";
    student2.display();
    std::cout << "Student 3: ";
    student3.display();

    if (student1 == student3) {
        std::cout << "Student 1 and Student 3 are equal." << std::endl;
    } else {
        std::cout << "Student 1 and Student 3 are not equal." << std::endl;
    }

    if (student1 == student2) {
        std::cout << "Student 1 and Student 2 are equal." << std::endl;
    } else {
        std::cout << "Student 1 and Student 2 are not equal." << std::endl;
    }

    return 0;
}
