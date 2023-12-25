//Write a program to find average, max and min elements from an array of n long integers.
#include<stdio.h>
int main(){
    int n, sum = 0;

    printf("\nEnter The Number Of Elements to be Entered in the Array: ");
    scanf("%d", &n);
    int numb[n], elemax, elemin;

    printf("\nEnter The Elements of the Array:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numb[i]);
    }

    printf("\nYour Entred Array is: ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", numb[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + numb[i];
    }
    
    // Average Of All the Array Elements.
    printf("\n\nThe Average of all the elements is: %d", sum/n);

    // To get the largest element of the array.
    for (int i = 0; i < n; i++)
    {
        if (numb[i] >= elemax)
        {
            elemax = numb[i];
        }
    }

    printf("\n\nThe Largest among all Elements is:  %d\n", elemax);

    // To get the smallest element of the array.
    for (int i = 0; i < n; i++)
    {
        if (numb[i] <= elemin)
        {
            elemin = numb[i];
        }
    }

    printf("\nThe Smallest among all Elements is:  %d\n", elemin);
return 0;
}