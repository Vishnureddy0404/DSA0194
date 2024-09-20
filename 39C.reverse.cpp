#include <iostream>
#include <string>
void reverseString(std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        std::swap(str[left], str[right]);
        left++;
        right--;
    }
}

int main() {
    std::string input;
    std::cout << "Enter a string:\n";
    std::getline(std::cin, input); 
    reverseString(input);
    std::cout << "Reversed string: " << input << std::endl;
    return 0;
}
