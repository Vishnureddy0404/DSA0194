#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;

public:
    Book(const std::string &title, const std::string &author, int year)
        : title(title), author(author), year(year) {
        std::cout << "Book created: " << title << " by " << author << " (" << year << ")" << std::endl;
    }
    ~Book() {
        std::cout << "Book destroyed: " << title << std::endl;
    }
    void display() const {
        std::cout << "Title: " << title << ", Author: " << author << ", Year: " << year << std::endl;
    }
};

int main() {
    Book myBook("1984", "George Orwell", 1949);
    myBook.display();
    return 0;
}
