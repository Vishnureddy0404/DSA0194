#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    Person(std::string n, int a) : name(n), age(a) {}
};

int main() {
    Person person("sasi", 20);
    Person* ptr = &person;

    std::cout << "Name: " << ptr->name << std::endl;
    std::cout << "Age: " << ptr->age << std::endl;

    return 0;
}
