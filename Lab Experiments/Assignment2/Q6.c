//Fibonacci Series
#include <stdio.h>
int seri(int n);
int main()
{
    int n;
    printf("\nEnter the numbers of terms in Fibonacci series: ");
    scanf("%d", &n);

    printf("\nTerms are: ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", seri(i));
    }
    return 0;
}

int seri (int n)
{
    if (n<2)
    return n;
    else
    {
        return seri(n-1) + seri(n-2);
    }
    
}