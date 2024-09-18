#include <iostream>
using namespace std;
int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5, element, position;
    cout << "Enter element and position: ";
    cin >> element >> position;
    if (position < 0 || position > n) {
        cout << "Invalid position" << endl;
        return 0;
    }
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    n++;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
