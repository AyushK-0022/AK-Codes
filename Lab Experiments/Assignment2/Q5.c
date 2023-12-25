//Calculate nCr.
#include <stdio.h>
// Fuction to calculate the Factorial.
int factorial(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    else
        return num = num * factorial(num - 1);
}

// Fuction to calculate the Combination (nCr).
int nCr(int n, int r)
{
    int nCr = factorial(n) / (factorial(r) * factorial(n - r));
    return nCr;
}

int main()
{
    int factn, factr,factnCr, p, n, r;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    printf("\nEnter the value of r: ");
    scanf("%d", &r);

    printf("\nValue of n! is: %d", factorial(n));
    printf("\n\nValue of r! id: %d", factorial(r));

    factnCr = nCr(n, r);

    printf("\n\nnCr for n = %d and r = %d is: %d", n, r, factnCr);
    return 0;
}