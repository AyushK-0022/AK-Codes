//Calculate Factorial.
#include<stdio.h>
int factorial(int n)
{
   if(n>1)
   {
   return (n*factorial(n-1));
   }

   if (n==0)
   {
      return 1;
   }

}
int main(int argc, char const *argv[])
{
    int n,c;
    printf("enter the num\n");
    scanf("%d", &n);

    c = factorial(n);
    printf("factirial is %d",c);

    return 0;
}