#include <stdio.h>
#include <stdlib.h>
main()
{   
    FILE *fp;
    
    fp = fopen("test.txt", "w");
    if (fp == NULL)
        printf("File does not exist");
    else
        printf("File exist");

    fprintf(fp, "%s", " ");
    fputs(" HELLO \n my name is krishnendra singh ECE A  ", fp);

    fprintf(fp, "\nTable of Numbers from 2 to 50:\n");
    int n ;
    for (int i = 2; i <= 50  ; i++)
     {
         for (int j =1 ; j <= 10 ; j++) {
        fprintf(fp, "%d * %d: ",i,j);
        fprintf(fp, "%d ",j * i); 
    }
        
        fprintf(fp, "\n");
        
    }

    fclose(fp);


}