// Sum of Natural Numbers upto 'n' terms.
#include <stdio.h>
int main()
{
    int n, sum = 0;

    printf("\nEnter The Number of terms upto which the sum is to be calculated: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("\nThe Sum Of the Asked number of natural numbers is: %d\n", sum);
    return 0;
}