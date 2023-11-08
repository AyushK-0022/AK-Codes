#include <stdio.h>
int main()
{
    int a;
    printf("\nEnter an Integer:");
    scanf("%d", &a);
    if (a%2==0)
    printf("The Number Is Even!");
    
    else
    printf("The Number Is Odd!");
    
    return 0;
}