#include <iostream>
#include <string>


class Employee {
protected:
    std::string name;
    int id;
    double salary;

public:
    void setName(const std::string& empName) { name = empName; }
    void setId(int empId) { id = empId; }
    void setSalary(double empSalary) { salary = empSalary; }

    std::string getName() const { return name; }
    int getId() const { return id; }
    double getSalary() const { return salary; }
};

class Manager : public Employee {
private:
    std::string department;
    double bonus;

public:
  
    void setDepartment(const std::string& dept) { department = dept; }
    void setBonus(double empBonus) { bonus = empBonus; }

    std::string getDepartment() const { return department; }
    double getBonus() const { return bonus; }
};

class Engineer : public Employee {
private:
    std::string specialty;
    int hours;

public:
    void setSpecialty(const std::string& spec) { specialty = spec; }
    void setHours(int empHours) { hours = empHours; }

    std::string getSpecialty() const { return specialty; }
    int getHours() const { return hours; }
};

int main() {
  
    Manager manager;
    manager.setName("Alice");
    manager.setId(101);
    manager.setSalary(85000);
    manager.setDepartment("Sales");
    manager.setBonus(5000);

    Engineer engineer;
    engineer.setName("Bob");
    engineer.setId(102);
    engineer.setSalary(70000);
    engineer.setSpecialty("Software Development");
    engineer.setHours(40);

    std::cout << "Manager Details:\n";
    std::cout << "Name: " << manager.getName() << "\n";
    std::cout << "ID: " << manager.getId() << "\n";
    std::cout << "Salary: $" << manager.getSalary() << "\n";
    std::cout << "Department: " << manager.getDepartment() << "\n";
    std::cout << "Bonus: $" << manager.getBonus() << "\n\n";

    std::cout << "Engineer Details:\n";
    std::cout << "Name: " << engineer.getName() << "\n";
    std::cout << "ID: " << engineer.getId() << "\n";
    std::cout << "Salary: $" << engineer.getSalary() << "\n";
    std::cout << "Specialty: " << engineer.getSpecialty() << "\n";
    std::cout << "Hours: " << engineer.getHours() << " hours/week\n";

    return 0;
}
