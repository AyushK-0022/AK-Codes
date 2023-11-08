#include<stdio.h>
   int main()
   {
    float basic_salary, da, hra, net_salary;
    printf("Enter Basic Salary:");
    scanf("%f",&basic_salary);
    da=0.4*basic_salary;
    hra=0.2*basic_salary;

    net_salary=basic_salary+da+hra;
    printf("Net Salary Of Ramesh is: %.2f\n", net_salary);
    return 0;
   }
