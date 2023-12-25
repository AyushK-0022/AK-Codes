#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int n;
    int *ptr;
    printf("enter size of array\n");
    scanf("%d",&n);

    ptr = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter %dth element of array\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",ptr[i]);
    }
    free(ptr);
    
    return 0;
}