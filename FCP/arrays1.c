#include<stdio.h>
int main(){
    int a[]={1,2,3,9};
    //a=[4];

    for (int i = 0; i < 4; i++)
    {
        printf("%u\n", &a[i]);
    }
    printf("%u\n", &a);
}