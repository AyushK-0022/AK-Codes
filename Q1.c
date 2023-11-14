//Print n times
#include<stdio.h>
int main(){
    int n;
    printf("Enter the required value: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("This is a FOR loop\n");
    }
    
    return 0;
}