#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;
    char gender;

public:
    Person(const std::string& name, int age, char gender)
        : name(name), age(age), gender(gender) {}

    std::string getName() const { return name; }
    int getAge() const { return age; }
    char getGender() const { return gender; }

    void setName(const std::string& name) { this->name = name; }
    void setAge(int age) { this->age = age; }
    void setGender(char gender) { this->gender = gender; }

    virtual void display() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender;
    }
};

class Student : public Person {
private:
    std::string rollNumber;
    std::string studentClass;

public:
    Student(const std::string& name, int age, char gender, const std::string& rollNumber, const std::string& studentClass)
        : Person(name, age, gender), rollNumber(rollNumber), studentClass(studentClass) {}

    std::string getRollNumber() const { return rollNumber; }
    std::string getStudentClass() const { return studentClass; }

    void setRollNumber(const std::string& rollNumber) { this->rollNumber = rollNumber; }
    void setStudentClass(const std::string& studentClass) { this->studentClass = studentClass; }

    void display() const override {
        Person::display();
        std::cout << ", Roll Number: " << rollNumber << ", Class: " << studentClass << std::endl;
    }
};

class Teacher : public Person {
private:
    std::string subject;
    double salary;

public:
    Teacher(const std::string& name, int age, char gender, const std::string& subject, double salary)
        : Person(name, age, gender), subject(subject), salary(salary) {}

    std::string getSubject() const { return subject; }
    double getSalary() const { return salary; }

    void setSubject(const std::string& subject) { this->subject = subject; }
    void setSalary(double salary) { this->salary = salary; }

    void display() const override {
        Person::display();
        std::cout << ", Subject: " << subject << ", Salary: " << salary << std::endl;
    }
};

int main() {
    Student student("Alice", 20, 'F', "S12345", "Computer Science");
    student.display();

    Teacher teacher("Mr. Smith", 40, 'M', "Mathematics", 50000);
    teacher.display();

    return 0;
}
