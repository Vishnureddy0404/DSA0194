#include <iostream>
#include <vector>

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

    Matrix operator+(const Matrix &other) {
        if (rows != other.rows || cols != other.cols) {
            throw std::invalid_argument("Matrices must have the same dimensions for addition.");
        }

        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
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

void sumArrays(const int* arr1, const int* arr2, int* result, int size) {
    for (int i = 0; i < size; ++i) {
        result[i] = arr1[i] + arr2[i];
    }
}

int main() {
    int rows, cols;
    std::cout << "Enter the number of rows and columns for the matrices: ";
    std::cin >> rows >> cols;
    Matrix mat1(rows, cols);
    Matrix mat2(rows, cols);

    std::cout << "Enter elements for the first matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int value;
            std::cout << "Element [" << i << "][" << j << "]: ";
            std::cin >> value;
            mat1.setValue(i, j, value);
        }
    }

    std::cout << "Enter elements for the second matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int value;
            std::cout << "Element [" << i << "][" << j << "]: ";
            std::cin >> value;
            mat2.setValue(i, j, value);
        }
    }

    Matrix matResult = mat1 + mat2;
    std::cout << "Sum of matrices:\n";
    matResult.display();
    int size;
    std::cout << "Enter the size of the arrays: ";
    std::cin >> size;
    int* arr1 = new int[size];
    int* arr2 = new int[size];
    int* arrResult = new int[size];

    std::cout << "Enter elements for the first array:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Element [" << i << "]: ";
        std::cin >> arr1[i];
    }

    std::cout << "Enter elements for the second array:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Element [" << i << "]: ";
        std::cin >> arr2[i];
    }

    sumArrays(arr1, arr2, arrResult, size);
    std::cout << "Sum of arrays:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << arrResult[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
