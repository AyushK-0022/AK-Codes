// Simple Interest Calculation Using A function.
#include <stdio.h>

float simple_interest(float p, float r, float t);
float simple_interest(float p, float r, float t){
    float simple_interest;
    simple_interest = (p * r * t) / 100;
    return simple_interest;
}

int main(){
    float prin, rate, time;

    printf("\nEnter The Principle Value: ");
    scanf("%f", &prin);

    printf("\nEnter The Rate: ");
    scanf("%f", &rate);

    printf("\nEnter The Time Duration in Years: ");
    scanf("%f", &time);

    printf("\nSimple Interest is: %f", simple_interest(prin, rate, time));

    return 0;
}
