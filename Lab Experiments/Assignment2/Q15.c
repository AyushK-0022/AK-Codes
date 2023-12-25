//Calculte Sum of the Diagonals of Square Matrix.
#include <stdio.h>
int main()
{
    int n;

    printf("\nEnter The Order of the Matrix whose diagonal elements are to be added: ");
    scanf("%d", &n);

    int arr[n][n];


    printf("\nEnter the elements of the Matrix:\n\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nYour entered Matrix is: \n\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }

    int sum = 0;

    printf("\nSum of Diagonal Elements is: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ( i == j)
            {
                sum = sum + arr[i][j];
            }
            
        }
        
    }
    printf(" %d ", sum);

return 0;
}