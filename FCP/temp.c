#include <stdio.h>
int main()
{
    float c, fah;

    printf("Enter Temperatue In Fahrenheit \n");

    scanf("%f", &fah);

    c = (fah - 32) / 1.8;
    printf("temperature in degree celcius is %f\n", c);
    return 0;
}