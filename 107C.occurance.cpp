#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int value, count = 0;
    cin >> value;
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) count++;
    }
    cout << count << endl;
    return 0;
}
