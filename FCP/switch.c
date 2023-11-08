// Design a calculator to perform math functions//
#include <stdio.h>
int main()
{
    int a, b, c;
    char op;

    printf("Enter Operation");
    scanf("%c", &op);

    printf("Enter The Values Of a,b and c respectively\n");
    scanf("%d\n%d\n%d", &a, &b, &c);

    switch (op)
    {
    case '+':
        printf("Sum is: %d", a + b + c);
        break;
    case '-':
        printf("Difference is: %d", a - b - c);
        break;
    case '*':
        printf("Multiplication is: %d", a*b*c);
    
    default:
        break;
    }
}