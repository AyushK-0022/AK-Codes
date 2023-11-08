#include<stdio.h>
void printmn(){
     printf("Hello functions\n");
     printf("Enter Number Of your choice");
     int a;
     scanf("%d", &a);
     if (a%2==0)
     {
        printf("The number is even");
    
     }
    else
    {
        printf("The numbefr is odd");
    }
     
}
void main(){

    printmn();
}
