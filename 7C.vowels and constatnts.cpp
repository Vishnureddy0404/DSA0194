#include <iostream>
using namespace std;
int main() {
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;
    if (isalpha(ch)) {  
        ch = tolower(ch);  
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            std::cout << ch << " is a vowel." << std::endl;
        } else {
            std::cout << ch << " is a consonant." << std::endl;
        }
    } else {
        std::cout << "Invalid input. Please enter an alphabetic character." << std::endl;
    }
    return 0;
}
