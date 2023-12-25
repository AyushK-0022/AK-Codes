#include <math.h>
#include <stdio.h>
int main()
{
    char op;
    float a, b, c;

    printf("Enter operation symbols or type 'e' to perform any mathematical operation: ");
    scanf("%c", &op);

    printf("Enter the value of a :");
    scanf("%f", &a);
    printf("Enter the value of b :");
    scanf("%f", &b);

    switch (op)
    {
    case '+':
        c = a + b;
        printf("Addition of %f+%f is : %f ", a, b, c);
        break;
    case '-':
        c = a - b;
        printf("subtraction of %f-%f is : %f ", a, b, c);
        break;
    case '*':
        c = a * b;
        printf("multiplication of %f and %f is : %f ", a, b, c);
        break;
    case '/':
        c = a / b;
        printf("Division of %f by %f is : %.02f ", a, b, c);
        break;
    case 'e':
        c = pow(a, b);
        printf("Exponent of %f^%f is : %f ", a, b, c);
        break;
    }

    return 0;
}
