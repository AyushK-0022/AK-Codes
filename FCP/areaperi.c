#include<stdio.h>
int main(){
  float l,b,area,peri;
    printf("Enter The Length Of The Rectangle:\n");
    scanf("%f",&l);

    printf("Enter The Breadth Of The Rectangle:\n");
    scanf("%f", &b);

    area=l*b; peri=2*(l+b);

    if (area>peri)
    {
        printf("The Area Of The Rectangle Is Greater than the Perimeter.\n");
    }
    else
    {
        if(area==peri)
        printf("The Area And Perimeter Are Equal.\n");
        else
        printf("The Perimeter Is Greater.\n");
    }
return 0;
}