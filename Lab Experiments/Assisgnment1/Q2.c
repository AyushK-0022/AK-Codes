// Temperature Conversion Using Functions.
#include <stdio.h>

// Function defined for Celcius to Fahrenheit Conversion.
float Celcius(float c);
float Celcius(float c){
    float temp1;
    temp1 = (c * 1.8) + 32;
    return temp1;
}

// Function Defined for Fahrenheit to Celcius Conversion.
float Fahrenheit(float f);
float Fahrenheit(float f){
    float temp2;
    temp2 = (f - 32) / 1.8;
    return temp2;
}

int main(){
    float a, b;
    int n;
    float celc, fah;

    printf("\nPress 1 for Celcius to Fahrenheit Temperature Conversion or 2 for vice-versa: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("\nEnter The Temperature Value in Celcius: ");
        scanf("%f", &celc);
        fah = Celcius(celc);
        printf("\nThe Converted Temperature Value in Fahrenheit is: %f degree", fah);
        break;

    case 2:
        printf("\nEnter The Temperature Value in Fahrenheit: ");
        scanf("%f", &fah);
        celc = Fahrenheit(fah);
        printf("\nThe Converted Temperature Value in Celcius is: %f degree", celc);
        break;
    }

    return 0;
}
