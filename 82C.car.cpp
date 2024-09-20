#include <iostream>
#include <string>

class Car {
private:
    std::string make, model;
    int year;

public:
    Car(const std::string& carMake, const std::string& carModel, int carYear)
        : make(carMake), model(carModel), year(carYear) {
        std::cout << "Car created: " << year << " " << make << " " << model << std::endl;
    }
    ~Car() {
        std::cout << "Car destroyed: " << year << " " << make << " " << model << std::endl;
    }
    void displayInfo() const {
        std::cout << "Car Info: " << year << " " << make << " " << model << std::endl;
    }
};
int main() {
    Car myCar("Toyota", "Corolla", 2020);
    myCar.displayInfo();
    return 0;
}
