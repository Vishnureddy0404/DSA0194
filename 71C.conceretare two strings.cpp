#include <iostream>
#include <cstring>

class StringConcatenator {
public:
    std::string concatenate(const std::string &str1, const std::string &str2) {
        return str1 + str2;
    }
    char* concatenate(const char* arr1, const char* arr2) {
        size_t len1 = strlen(arr1);
        size_t len2 = strlen(arr2);
        char* result = new char[len1 + len2 + 1];
        strcpy(result, arr1);
        strcat(result, arr2);
        return result;
    }
};

int main() {
    StringConcatenator sc;
    std::string str1, str2;
    std::cout << "Enter first string: ";
    std::getline(std::cin, str1);
    std::cout << "Enter second string: ";
    std::getline(std::cin, str2);
    std::string concatenatedString = sc.concatenate(str1, str2);
    std::cout << "Concatenated string: " << concatenatedString << std::endl;

    const int size1 = 100, size2 = 100;
    char arr1[size1], arr2[size2];
    std::cout << "Enter first character array: ";
    std::cin.getline(arr1, size1);
    std::cout << "Enter second character array: ";
    std::cin.getline(arr2, size2);
    char* concatenatedArray = sc.concatenate(arr1, arr2);
    std::cout << "Concatenated character array: " << concatenatedArray << std::endl;

    return 0;
}
