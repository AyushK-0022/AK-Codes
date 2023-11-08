#include <stdio.h>
int main()
{
     float sp, cp, loss, pro;

     printf("\nEnter The Cost Price and Selling Price: ");
     scanf("%f%f", &cp, &sp);
     pro = sp - cp;
     loss = cp - sp;
     if (pro > 0)
          printf("The Seller has earned a profit of:%f Rupees\n", pro);
     if (loss > 0)
          printf("The seller has made a loss of:%f Rupees\n", loss);
     if (pro == 0)
          printf("The Seller Had no Profit or Loss!\n");

     return 0;
}