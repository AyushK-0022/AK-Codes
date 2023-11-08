#include<stdio.h>
int main(){
     float a1,a2,a3;
    printf("Enter The Age Of Ram, Shyam And Ajay respecrively:");
    scanf("%f%f%f",&a1,&a2,&a3);
    if (a1<a2&&a1<a3)
    {
        printf("Ram Is The Youngest!");
    }
    else
    {
        if (a2<a1&&a2<a3)
        {
            printf("Shyam Is The Youngest!");
        }
        else
        {
            if (a3<a1&&a3<a2)
            {
                printf("Ajay Is The Youngest!");
            }
            
        }
        
    }
    
return 0;
}