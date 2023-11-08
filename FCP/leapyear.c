#include <stdio.h>
int main()
{
    int year;
    printf("\nEnter The Year:");
    scanf("%d", &year);

    if (year%100==0)
    {
        if (year%400==0)
        {
            printf("The Entered Year is a Leap Year!");
        }
        else
        {
            printf("The Entered Year is not a Leap year!");
        }
        
    }
    else
    {
        if (year%4==0)
        {
            printf("The Entered Year is a Leap Year");
        }
        else
        {
            printf("The Entered Year is not a Leap Year");
        }
        
    }
    
    return 0;
}