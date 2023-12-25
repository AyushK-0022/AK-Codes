// Use a FOR loop to find the largest element of the array.
#include <stdio.h>
int main()
{
    int n;

    printf("\nEnter The Number Of Elements to be Entered in the Array: ");
    scanf("%d", &n);
    int numb[n], elem;

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

    // To get the largest element of the array.
    for (int i = 0; i < n; i++)
    {
        if (numb[i] >= elem)
        {
            elem = numb[i];
        }
    }

    printf("\n\nThe Largest among all Elements is:  %d\n", elem);

    return 0;
}