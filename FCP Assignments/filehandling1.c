#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp; // r = switch  a af w wf
    char c;
    int count = 0;
    fp = fopen("test.txt","w");
    if(fp == NULL)
    {
        printf("file not found");

    }
      printf("\n");
    while ((c = fgetc(fp))!= EOF)
    { 
       putchar(c); 
count = count + 1;
    }
    printf("\n");
printf("%d",count);
    fclose(fp);
    return 0;
}