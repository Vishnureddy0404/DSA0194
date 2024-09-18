#include <iostream>
using namespace std;
int main() {
    int rows = 5;
    int spaces;
    for (int i = 1; i <= rows; i++) {
        spaces = rows - i;
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = rows - 1; i >= 1; i--) {
        spaces = rows - i;
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
