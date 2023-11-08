// Q. Write a program to perform the following tasks:
// 1. print two 3*3 matrices
// 2. print addition of these matrices
// 3. print adjoint of any one matrix
// 4. calculate inverse of any one of the matrix

#include <stdio.h>
int main()
{
    int i, j, a[3][3], b[3][3], c[3][3];
    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {
            a[i][j] = 10 * (i + 1) + (j + 1);

            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    for (i = 0; i < 3; i++)

    {
        for (j = 0; j < 3; j++)
        {
            b[i][j] = 2 * (i + 1) + (j + 1);

            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = (a[i][j]) + (b[i][j]);
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}