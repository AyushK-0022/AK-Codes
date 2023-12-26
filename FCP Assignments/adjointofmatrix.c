#include <stdio.h>
// adjoint of matrix
int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int adjoint[3][3];

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            int cofactor = matrix[(j + 1) % 3][(i + 1) % 3] * matrix[(j + 2) % 3][(i + 2) % 3] -
                           matrix[(j + 1) % 3][(i + 2) % 3] * matrix[(j + 2) % 3][(i + 1) % 3];

            adjoint[i][j] = (i + j) % 2 == 0 ? cofactor : -cofactor;
        }
    }
    printf("Adjoint Matrix:\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%d ", adjoint[i][j]);
        }
        printf("\n");
    }

    return 0;
}