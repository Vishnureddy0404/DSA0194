#include <iostream>
#include <vector>
int main() {
    int rows, cols;
    std::cout << "Enter the number of rows and columns: ";
    std::cin >> rows >> cols;
    std::vector<std::vector<int>> matrix1(rows, std::vector<int>(cols)),
                                  matrix2(rows, std::vector<int>(cols)),
                                  result(rows, std::vector<int>(cols, 0));
    std::cout << "Enter elements of the first matrix:\n";
    for (auto& row : matrix1)
        for (int& val : row) std::cin >> val;
    std::cout << "Enter elements of the second matrix:\n";
    for (auto& row : matrix2)
        for (int& val : row) std::cin >> val;
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[i][j] = matrix1[i][j] + matrix2[i][j];
    std::cout << "Resultant matrix after addition:\n";
    for (const auto& row : result) {
        for (int val : row) std::cout << val << " ";
        std::cout << std::endl;
    }
    return 0;
}
