#include <stdio.h>
int main()
{
    int n;
    printf("Enter length of Array:");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the Elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEntered Array Is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                c = c + 1;
            }
        }
        if (c != 0)
        {
            printf("\nSame Element in the Array %d\n", arr[i]);
        }
    }
    
    return 0;
}