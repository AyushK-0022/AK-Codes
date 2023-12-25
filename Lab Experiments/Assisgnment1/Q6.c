//Write a Program to Traverse an Array and print the Odd-Indexed Elements.
#include<stdio.h>
int main(){
    int n;

    printf("\nEnter The Number of Elements of the Array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the elements of the Array: ");

    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);        
    }

    printf("\nYour Entered array is: ");
    for (int i = 1; i <= n; i++)
    {
        printf(" %d ", arr[i]);
    }

    printf("\n\nOdd Indexd Elements Are: ");

    for ( int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf(" %d ", arr[i]);
        }
        
    }
    
    
return 0;
}