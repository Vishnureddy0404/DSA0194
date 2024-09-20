#include <iostream>
#include <vector>
#include <stdexcept>

class Matrix {
private:
    std::vector<std::vector<int>> data;
    int rows;
    int cols;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data.resize(r, std::vector<int>(c, 0));
    }

    void setValue(int r, int c, int value) {
        if (r < rows && c < cols) {
            data[r][c] = value;
        }
    }

    Matrix operator*(const Matrix &other) {
        if (cols != other.rows) {
            throw std::invalid_argument("Matrix dimensions are not compatible for multiplication.");
        }

        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

    void display() const {
        for (const auto &row : data) {
            for (int value : row) {
                std::cout << value << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    int rows1, cols1, rows2, cols2;

    std::cout << "Enter the number of rows and columns for the first matrix: ";
    std::cin >> rows1 >> cols1;
    Matrix mat1(rows1, cols1);

    std::cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            int value;
            std::cout << "Element [" << i << "][" << j << "]: ";
            std::cin >> value;
            mat1.setValue(i, j, value);
        }
    }

    std::cout << "Enter the number of rows and columns for the second matrix: ";
    std::cin >> rows2 >> cols2;

    if (cols1 != rows2) {
        std::cerr << "Error: The number of columns in the first matrix must equal the number of rows in the second matrix for multiplication." << std::endl;
        return 1;
    }

    Matrix mat2(rows2, cols2);

    std::cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            int value;
            std::cout << "Element [" << i << "][" << j << "]: ";
            std::cin >> value;
            mat2.setValue(i, j, value);
        }
    }

    std::cout << "Matrix 1:\n";
    mat1.display();
    std::cout << "Matrix 2:\n";
    mat2.display();

    Matrix result = mat1 * mat2;

    std::cout << "Result of Matrix Multiplication:\n";
    result.display();

    return 0;
}
