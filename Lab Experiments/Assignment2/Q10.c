// Swap teo numbers using Pointers.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, temp;
    int *ptr1;

    printf("enter a\n");
    scanf("%d", &a);

    printf("enter b\n");
    scanf("%d", &b);

    ptr1 = &b;
    temp = a;
    a = *ptr1;
    b = temp;

    printf("value of a is %d\n", a);
    printf("value of b is %d\n", b);
    
    return 0;
}