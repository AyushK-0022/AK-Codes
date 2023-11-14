//Print the table of an integer n whose value the user will input.
#include<stdio.h>
int main(){
    int i , n;
    printf("Enter the Number whose table is to be printed: ");
    scanf("%d", &n);

    for ( i = 1; i <=10; i++)
    {
        printf("%d ", i*n);
    }
    

    return 0;
}