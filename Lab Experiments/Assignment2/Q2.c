// Matrix Multiplication
#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;

    printf("\nEnter the Orders of the Matrices to be multiplied: \n");

    printf("\nEnter The Order (Row And Column respectuvely) of the Matrix 1:\n\n");
    scanf("%d %d", &r1, &c1);

    int arr1[r1][c1];

    printf("\nEnter the elements of the Matrix 1:\n\n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nYour entered Matrix 1 is: \n\n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf(" %d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter The Order (Row And Column respectuvely) of the Matrix 2:\n\n");
    scanf("%d %d", &r2, &c2);

    int arr2[r2][c2];

    printf("\nEnter the elements of the Matrix 2:\n\n");

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\nYour entered Matrix 2 is: \n\n");

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf(" %d ", arr2[i][j]);
        }
        printf("\n");
    }

    if (c1 != r2)
    {
        printf("The two Matrices cannot be Multiplied due to their inappropriate Orders.\n");
    }

    // Multiplication Of the Matrices.
    int mult[r1][c2];

    if (c1 == r2)
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                mult[i][j] = 0;
                for (int k = 0; k < r2; k++)
                {
                    mult[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
    }

    printf("\nThe Resultant Matrix is: \n\n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf(" %d ", mult[i][j]);
        }
        printf("\n");
    }

    return 0;
}