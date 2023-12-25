//Calculate the sum of array elements.
#include<stdio.h>
int main(){
    int sum = 0;
    int n;

    printf("\nEnter The Number Of Elements to be Entered in the Array: ");
    scanf("%d", &n);
    int numb[n];

    printf("\nEnter The Elements of the Array:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numb[i]);
        sum = sum + numb[i];
    }

    printf("\nYour Entred Array is: "); 
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", numb[i]);
    }
    
    printf("\n\nThe Sum Of All The Elements Of the Array is: %d ", sum);

return 0;
}