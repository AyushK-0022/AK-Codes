// Check if 'n' is even or odd.
#include <stdio.h>
int main()
{
    int n;

    printf("\nEnter the Number to check its Even or Odd: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("\nThe Entered number %d is EVEN. ", n);
    }
    else
    {
        printf("\nThe Entered number %d id ODD. ", n);
    }

    return 0;
}