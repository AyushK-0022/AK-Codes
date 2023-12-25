// Matrix Addition
#include <stdio.h>
int main()
{
    int n;

    printf("\nEnter The Order of the Matrices to be added: ");
    scanf("%d", &n);

    int arr1[n][n];
    int arr2[n][n];
    int sum[n][n];

    printf("\nEnter the elements of the Matrix 1:\n\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nEnter the elements of the Matrix 2:\n\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\nYour entered Matrix 1 is: \n\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("\nYour entered Matrix 2 is: \n\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d ", arr2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("\nAddition Matrix is: \n\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
