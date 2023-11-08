#include<stdio.h>
int main(){
  float km,m,feet,inch,cm;

printf("Enter the distance between two cities in km:");
scanf("%f", &km);

 m=km*1000;
 feet=km*3280.84;
 inch=km*39370.1;
 cm=km*100000;

printf("Distance in metres is: %.2f m\n", m);
printf("Distance in feet is: %.2f feet\n", feet);
printf("Distance in inches is: %.2f inch\n", inch);
printf("Distance in centimetres is: %.2f cm\n", cm);

return 0;

}