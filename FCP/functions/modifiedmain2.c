#include<stdio.h>
    int swapn(int i, int j)
    {
        printf("i is %d\n", i);
        printf("j is %d\n", j);

        int temp;
        temp = i;
        i=j;
        j=temp;

    return i,j;
    }

void main(){
    int c,d,a=10,b=5;
    printf("a is %d\n", a);
    printf("b is %d\n", b);

    a,b= swapn(a,b);

    printf("a is %d\n", a);
    printf("b is %d\n", b);
}