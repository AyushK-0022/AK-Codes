#include <stdio.h>
int main(){
int jyear, cyear, bonus, yos;
printf("Enter The Joining Year and Current Year:");
scanf("%d%d", &jyear,&cyear);
yos= cyear-jyear;
  if (yos>3)
  {
    bonus=2500;
  }
printf("The Bonus of 2500 is rewarded.");

return 0;
}