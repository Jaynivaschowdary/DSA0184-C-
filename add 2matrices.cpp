#include <iostream>
#include <vector>
std::vector<std::vector<int>> addMatrices(const std::vector<std::vector<int>>& mat1, const std::vector<std::vector<int>>& mat2) {
    int rows = mat1.size();
    int cols = mat1[0].size();
    std::vector<std::vector<int>> result(rows, std::vector<int>(cols, 0));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
}
    
    return result;
}
void displayMatrix(const std::vector<std::vector<int>>& mat) {
    for (const auto& row : mat) {
        for (int element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
}
int main() {
    std::vector<std::vector<int>> mat1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    std::vector<std::vector<int>> mat2 = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    std::vector<std::vector<int>> result = addMatrices(mat1, mat2);
    std::cout << "Matrix 1:" << std::endl;
    displayMatrix(mat1);
    std::cout << "Matrix 2:" << std::endl;
    displayMatrix(mat2);
    std::cout << "Resultant Matrix:" << std::endl;
    displayMatrix(result);
    return 0;
}
