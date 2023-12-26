#include <stdio.h>
// inverse of matrix
int main() {
    int matrix[3][3] = {{1, 2, 4}, {4, 200, 6}, {7, 100, 9}};
    int determinant = 0;

    for (int i = 0; i < 3; ++i) {
        determinant += (matrix[0][i] * (matrix[1][(i + 1) % 3] * matrix[2][(i + 2) % 3] -
                                       matrix[1][(i + 2) % 3] * matrix[2][(i + 1) % 3]));
    }

    if (determinant == 0) {
        printf("The matrix doesn't have an inverse.\n");
        return 0;
    }

    int adjoint[3][3];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int cofactor = matrix[(j + 1) % 3][(i + 1) % 3] * matrix[(j + 2) % 3][(i + 2) % 3] -
                           matrix[(j + 1) % 3][(i + 2) % 3] * matrix[(j + 2) % 3][(i + 1) % 3];
            adjoint[i][j] = (i + j) % 2 == 0 ? cofactor : -cofactor;
        }
    }

    float inverse[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            inverse[i][j] = (float)adjoint[i][j] / determinant;
        }
    }

    printf("Inverse Matrix:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%.2f ", inverse[i][j]);
        }
        printf("\n");
    }

    return 0;
}