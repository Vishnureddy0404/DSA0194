#include <iostream>
#include <string>

class Vehicle {
protected:
    std::string make;
    std::string model;
    int year;

public:
    Vehicle(const std::string& make, const std::string& model, int year)
        : make(make), model(model), year(year) {}

    std::string getMake() const { return make; }
    std::string getModel() const { return model; }
    int getYear() const { return year; }

    void setMake(const std::string& make) { this->make = make; }
    void setModel(const std::string& model) { this->model = model; }
    void setYear(int year) { this->year = year; }

    virtual void display() const {
        std::cout << "Make: " << make << ", Model: " << model << ", Year: " << year;
    }
};

class Car : public Vehicle {
private:
    int seatingCapacity;
    std::string fuelType;

public:
    Car(const std::string& make, const std::string& model, int year, int seatingCapacity, const std::string& fuelType)
        : Vehicle(make, model, year), seatingCapacity(seatingCapacity), fuelType(fuelType) {}

    int getSeatingCapacity() const { return seatingCapacity; }
    std::string getFuelType() const { return fuelType; }

    void setSeatingCapacity(int seatingCapacity) { this->seatingCapacity = seatingCapacity; }
    void setFuelType(const std::string& fuelType) { this->fuelType = fuelType; }

    void display() const override {
        Vehicle::display();
        std::cout << ", Seating Capacity: " << seatingCapacity << ", Fuel Type: " << fuelType << std::endl;
    }
};

class Truck : public Vehicle {
private:
    int payloadCapacity;
    int towingCapacity;

public:
    
    Truck(const std::string& make, const std::string& model, int year, int payloadCapacity, int towingCapacity)
        : Vehicle(make, model, year), payloadCapacity(payloadCapacity), towingCapacity(towingCapacity) {}

    int getPayloadCapacity() const { return payloadCapacity; }
    int getTowingCapacity() const { return towingCapacity; }

    void setPayloadCapacity(int payloadCapacity) { this->payloadCapacity = payloadCapacity; }
    void setTowingCapacity(int towingCapacity) { this->towingCapacity = towingCapacity; }

    void display() const override {
        Vehicle::display();
        std::cout << ", Payload Capacity: " << payloadCapacity << " lbs, Towing Capacity: " << towingCapacity << " lbs" << std::endl;
    }
};

int main() {
    Car myCar("Toyota", "Camry", 2020, 5, "Gasoline");
    myCar.display();

    Truck myTruck("Ford", "F-150", 2021, 2000, 13000);
    myTruck.display();

    return 0;
}
