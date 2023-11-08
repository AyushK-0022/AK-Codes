#include<stdio.h>
 int main(){
  int m1,m2,m3,m4,m5;
  float total, percent;

printf("Enter marks obtained in subject 1:");
scanf("%d", &m1);

printf("Enter marks obtained in subject 2:");
scanf("%d", &m2);

printf("Enter marks obtained in subject 3:");
scanf("%d", &m3);

printf("Enter marks obtained in subject 4:");
scanf("%d", &m4);

printf("Enter marks obtained in subject 5:");
scanf("%d", &m5);

total= m1+m2+m3+m4+m5;
percent= (total/500)*100;

printf("Total Marks Obtained : %.2f\n", total);
printf("Percentage marks obtained: %.2f\n", percent);

if (percent>=60)
printf("First Division");

if (percent>=50&&percent<40)
printf("Second Division");

if (percent>=40&&percent<50)
printf("Third Division");

if (percent<40)
printf("Failed");

return 0;
 }