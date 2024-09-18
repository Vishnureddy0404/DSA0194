#include <iostream>
#include <vector>
int main() {
    int n;
    std::cout << "Enter the size of the square matrix (n x n): ";
    std::cin >> n;
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));
    std::cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;
    for (int i = 0; i < n; ++i) {
        primaryDiagonalSum += matrix[i][i];         
        secondaryDiagonalSum += matrix[i][n - 1 - i]; 
    }
    std::cout << "Sum of the primary diagonal: " << primaryDiagonalSum << std::endl;
    std::cout << "Sum of the secondary diagonal: " << secondaryDiagonalSum << std::endl;
    return 0;
}
