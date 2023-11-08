#include<stdio.h>
int main(){
    int i,j,a[4][4];
    for ( i = 0; i <= 4; i++)
    {

        for (j = 0; j <= 4; j++)
        {
            a[i][j]=10*(i+1)+(j+1);

            printf("%d ", a[i][j]);
        }
        printf("\n");

    }

return 0;
}