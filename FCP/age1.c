#include<stdio.h>
int main(){
     float a1,a2,a3;
    printf("Enter The Age Of Ram Shyam And Ajay Respectively:");
    scanf("%f%f%f", &a1,&a2,&a3);
    if (a1<a2&&a1<a3)
    {
        printf("Ram Is Youngest!\n");
    }
    if (a2<a1&&a2<a3)
    {
        printf("Shyam Is the Youngest!\n");
    }
    if (a3<a1&&a3<a2)
    {
        printf("Ajay Is the Youngest!\n");
    }
    
return 0;
}