#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrixA = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    std::vector<std::vector<int>> matrixB = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    if (matrixA.size() != matrixB.size()) {
        std::cerr << "Matrices must have the same dimensions." << std::endl;
        return 1;
    }

    std::vector<std::vector<int>> result(matrixA.size());
    for (size_t i = 0; i < matrixA.size(); ++i) {
        if (matrixA[i].size() != matrixB[i].size()) {
            std::cerr << "Matrices must have the same dimensions." << std::endl;
            return 1;
        }
        result[i].resize(matrixA[i].size());
        for (size_t j = 0; j < matrixA[i].size(); ++j) {
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    std::cout << "Matrix A:" << std::endl;
    for (auto &row : matrixA) {
        for (auto value : row) std::cout << value << " ";
        std::cout << std::endl;
    }

    std::cout << "\nMatrix B:" << std::endl;
    for (auto &row : matrixB) {
        for (auto value : row) std::cout << value << " ";
        std::cout << std::endl;
    }

    std::cout << "\nMatrix A + Matrix B:" << std::endl;
    for (auto &row : result) {
        for (auto value : row) std::cout << value << " ";
        std::cout << std::endl;
    }

    return 0;
}
