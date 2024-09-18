#include <iostream>
#include <vector>
int main() {
    int row1, col1, row2, col2;
    std::cout << "Enter dimensions of first matrix (rows cols):\n";
    std::cin >> row1 >> col1;
    std::cout << "Enter dimensions of second matrix (rows cols):\n";
    std::cin >> row2 >> col2;
    if (col1 != row2) {
        std::cout << "Matrix multiplication not possible!" << std::endl;
        return 1;
    }
    std::vector<std::vector<int>> matrix1(row1, std::vector<int>(col1)),
                                  matrix2(row2, std::vector<int>(col2)),
                                  result(row1, std::vector<int>(col2, 0));

    std::cout << "Enter first matrix:\n";
    for (auto& row : matrix1)
        for (int& val : row) std::cin >> val;
    std::cout << "Enter second matrix:\n";
    for (auto& row : matrix2)
        for (int& val : row) std::cin >> val;
    for (int i = 0; i < row1; ++i)
        for (int j = 0; j < col2; ++j)
            for (int k = 0; k < col1; ++k)
                result[i][j] += matrix1[i][k] * matrix2[k][j];
    std::cout << "Resultant matrix:\n";
    for (const auto& row : result) {
        for (int val : row) std::cout << val << " ";
        std::cout << std::endl;
    }
    return 0;
}
