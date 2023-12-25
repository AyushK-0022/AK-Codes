#include<stdio.h>
int sum(int *a,int *b)
{
    *a=*a+*b;
}
int main(int argc, char const *argv[])
{
    int a,b;
    printf("enter a\n");
    scanf("%d", &a);

    printf("enter b\n");
    scanf("%d", &b);

    sum(&a,&b);
    printf("value of sum is %d",a);
    
    return 0;
}