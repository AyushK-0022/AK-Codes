//Getting the factorial of the given number 'n' using loops.
#include<stdio.h>
int main(){
    int n, fact = 1;

    printf("\nEnter The Number Whose Factorial Is to be Calculated: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    
    printf("\nFactorial Of the Entered number %d is: %d", n, fact);

return 0;
}