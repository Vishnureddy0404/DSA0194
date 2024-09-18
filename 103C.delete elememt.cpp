#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int position;
    cin >> position;
    if (position < 0 || position >= n) {
        cout << "Invalid position" << endl;
        return 0;
    }
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
