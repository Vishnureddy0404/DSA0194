#include <iostream>
using namespace std;
int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    int greater = (a > b) ? a : b;
    std::cout << "The greater number is: " << greater << std::endl;
    return 0;
}
