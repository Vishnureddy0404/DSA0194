#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
    std::string species;
    int age;

public:
    Animal(const std::string& name, const std::string& species, int age)
        : name(name), species(species), age(age) {}

    std::string getName() const { return name; }
    std::string getSpecies() const { return species; }
    int getAge() const { return age; }

    
    void setName(const std::string& name) { this->name = name; }
    void setSpecies(const std::string& species) { this->species = species; }
    void setAge(int age) { this->age = age; }

    virtual void display() const {
        std::cout << "Name: " << name << ", Species: " << species << ", Age: " << age;
    }
};

class Cat : public Animal {
private:
    std::string color;
    std::string breed;

public:

    Cat(const std::string& name, const std::string& species, int age, const std::string& color, const std::string& breed)
        : Animal(name, species, age), color(color), breed(breed) {}

 
    std::string getColor() const { return color; }
    std::string getBreed() const { return breed; }

  
    void setColor(const std::string& color) { this->color = color; }
    void setBreed(const std::string& breed) { this->breed = breed; }

    void display() const override {
        Animal::display();
        std::cout << ", Color: " << color << ", Breed: " << breed << std::endl;
    }
};

class Dog : public Animal {
private:
    double weight;
    std::string breed;

public:

    Dog(const std::string& name, const std::string& species, int age, double weight, const std::string& breed)
        : Animal(name, species, age), weight(weight), breed(breed) {}


    double getWeight() const { return weight; }
    std::string getBreed() const { return breed; }


    void setWeight(double weight) { this->weight = weight; }
    void setBreed(const std::string& breed) { this->breed = breed; }

    void display() const override {
        Animal::display();
        std::cout << ", Weight: " << weight << " kg, Breed: " << breed << std::endl;
    }
};

int main() {
    Cat myCat("Whiskers", "Feline", 3, "Gray", "Siamese");
    myCat.display();

    Dog myDog("Buddy", "Canine", 5, 30.5, "Golden Retriever");
    myDog.display();

    return 0;
}
