#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter The Value Of a, b and c respectively\n");
    scanf("%d%d%d", &a,&b,&c);

if (a>b&&b>c)
{
    printf("a Is The Greatest Of all.");
}
else if (b>c&&b>a)
{
    printf("b Is the Greatest Of all.");
}
else if (c>a&&c>b)
{
    printf("c Is The Greatest Of all.");
}
else if (c==a||b==a||c==b)
{
    printf("Any two of the entered values are equal.");
}
else if (a==b==c)
{
printf("All are Equal.");
}

return 0;
}