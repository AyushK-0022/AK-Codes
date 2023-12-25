// Write a program that uses two functions to swap two numbers Using a third variable.
#include <stdio.h>
// Fuction defined to Swap the values of two numbers using three variables.
void swapNumbers(float *a, float*b) {
    float num = *a;
    *a = *b;
    *b = num;
}

int main() {
    float num1, num2;

    printf("\nEnter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("\nEnterd Numbers Before swapping:\n");
    printf("\nFirst number: %f\n", num1);
    printf("Second number: %f\n", num2);

    // Calling the Function
    swapNumbers(&num1, &num2);

    printf("\nAfter swapping:\n");
    printf("\nFirst number: %f\n", num1);
    printf("Second number: %f\n", num2);

    return 0;
}
