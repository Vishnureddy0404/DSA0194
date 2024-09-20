#include <iostream>
#include <string>

int main() {
    std::string userInput;
    std::cout << "Enter a string: ";
    std::getline(std::cin, userInput);
    std::string* stringPtr = &userInput;
    std::cout << "You entered: " << *stringPtr << std::endl;
    return 0;
}
