#include<stdio.h>
void main()
{ int count = 0;
int count1=0;
int l = 0;
char c[7];

char a[10] = "Ayush";                 //string as array of characters
char b[10] = "Kaushik";
char d[10]="student";
  for (int i = 0 ; i<10 ;i++)
  {
    if(a[i]=='\0')                   
    {
    printf("Length of string a = %d\n",count);
    break;
    }
  else
  {
  count = count+1;                    // to count the number of characters in a
  }
}

for (int j=0 ; j<10 ;j++)
  {
    if(b[j]=='\0')
    {                             
    printf("Length of string b = %d\n",count1);
    break;
    }
  else
  {
  count1 = count1+1;                 // to count the number of characters in b
  }
  }

  if (count>count1)                  // comparing the length of string a and b
  printf("Length of a is greater than b \n");
  else
  printf("Length of b is greater or equal to a \n");


  l=count+count1;       

  char arr[l];

  printf("Length of arr = %d\n",l);
  printf("Concatinated String = ");

  for(int k =0;k<l;k++)
  {

    if (k<count)

   arr[k] = a[k]; 

    else                                //concatinating string a and b

    arr[k] = b[k-count];

  printf("%c", arr[k]);

  }

  printf("\n");
  printf("Reversed String = ");
  for (int m = 0 ; m <8 ; m++)
  {
    c[m] = d[count];                     // string reversal
    count=count - 1 ;
    printf("%c",c [m]);
  }
  for(int i = 0 ; i<7;i++)
  {
  if(a[i]>b[i])
  {
    printf("\n%d",a);
    break;
  }
  else 
  {
    printf("\n%d",-1);
    break;
  }
  }
}