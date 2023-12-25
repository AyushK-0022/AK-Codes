//Write a program that uses two functions to swap two numbers Without Using a third variable.
#include<stdio.h>

// Fuction defined to swap two numbers Without Using a third variable.
void swapNumbers(float *a,float *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main(){
    float a, b;

    printf("\nEnter the First Number: ");
    scanf("%f", &a);

    printf("\nEnter the Second Number: ");
    scanf("%f", &b);
   
    swapNumbers(&a, &b);

    printf("\nNow the Swapped numbers are:\n Number 1: %f\n Number 2: %f ", a, b);

return 0;
}