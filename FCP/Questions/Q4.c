//For students having marks less then 35, print their roll numbers.
#include<stdio.h>
int main(){
    int marks[10], i;
  
    for (int i = 0; i < 10; i++)
    {
    printf("Enter the marks: %d\n", i+1);
    scanf("%d",&marks[i]);       
   
    }
    for (int i = 0; i < 10; i++)
     if (marks[i]<35)
    {
        printf("%d ", i+1);
    }
return 0;
}