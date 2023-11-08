#include <stdio.h>
int main()
{
    int bsal;
    float da, hra, tsal;
    printf("Enter The Basic Salary of the Employee:");
    scanf("%d", &bsal);
    if (bsal < 1500)
    {
        hra = bsal * 10 / 100;
        da = bsal * 90 / 100;
    }
    else
    {
        hra = 500;
        da = bsal * 98 / 100;
    }

    tsal = bsal + hra + da;
    printf("Total Salary Of the Employee is: %f", tsal);

    return 0;
}