#include <stdio.h>
int main()
{
    int a;

    printf("Enter The Number: ");
    scanf("%d", &a);

    if (a % 7 == 0 && a % 8 == 0 && a % 5 == 0 && a % 6 == 0)
    {
        printf("The number is divisible by 3, 5, 6, 7 and 8");
    }

    else if (a % 3 == 0 && a % 5 == 0 && a % 8 == 0 && a % 7 == 0)
    {
        printf("The number is divisible by 3, 5, 7 and 8");
    }

    else if (a % 8 == 0 && a % 5 == 0 && a % 6 == 0)
    {
        printf("The number is divisible by 3, 6, 5 and 8");
    }

    else if (a % 8 == 0 && a % 7 == 0 && a % 6 == 0)
    {
        printf("The number is divisible by 3, 6, 7 and 8");
    }

    else if (a % 3 == 0 && a % 5 == 0 && a % 7 == 0)
    {
        printf("The number is divisible by 3, 5 and 7");
    }

    else if (a % 3 == 0 && a % 5 == 0 && a % 8 == 0)
    {
        printf("The number is divisible by 3, 5 and 8");
    }

    else if (a % 3 == 0 && a % 8 == 0 && a % 7 == 0)
    {
        printf("The number is divisible by 3, 7 and 8");
    }

    else if (a % 3 == 0 && a % 5 == 0)
    {
        printf("The  number is divisible by 3 and 5");
    }

    else if (a % 3 == 0 && a % 7 == 0)
    {
        printf("The number is divisible by 3 and 7");
    }

    else if (a % 3 == 0 && a % 8 == 0)
    {
        printf("The number is divisible by 3 and 8");
    }

    else if (a % 5 == 0 && a % 8 == 0)
    {
        printf("The number is divisible by 5 and 8");
    }

    else if (a % 5 == 0 && a % 7 == 0)
    {
        printf("The number is divisible by 5 and 7");
    }

    else if (a % 5 == 0 && a % 6 == 0)
    {
        printf("The number is divisible by 3, 5 and 6");
    }

    else if (a % 6 == 0 && a % 8 == 0)
    {
        printf("The number is divisible by 3, 6 and 8");
    }

    else if (a % 6 == 0 && a % 7 == 0)
    {
        printf("The number is divisible by 3, 6 and 7");
    }

    else if (a % 7 == 0 && a % 8 == 0)
    {
        printf("The number is divisible by 7 and 8");
    }

    else if (a % 7 == 0)
    {
        printf("The Number is divisible by 7");
    }

    else if (a % 5 == 0)
    {
        printf("The number is divisible by 5");
    }

    else if (a % 8 == 0)
    {
        printf("The number is divisible by 8");
    }

    else if (a % 6 == 0)
    {
        printf("The number is divisible by 3 and 6");
    }

    else if (a % 3 == 0)
    {
        printf("The Number Is divisible by 3");
    }

    return 0;
}