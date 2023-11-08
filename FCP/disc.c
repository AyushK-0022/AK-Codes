#include <stdio.h>
int main(){
int qty, price, rate, disc=0;
float total;
printf("Enter The Quantity of Products and Rate:");
scanf("%d%d", &qty,&rate);
  if (qty>1000)
  disc=10;
  total=qty*rate-qty*rate*disc/100;
printf("Total=%f", total);
}