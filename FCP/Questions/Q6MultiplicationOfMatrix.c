
#include<stdio.h>
int main(){
    int a[3][3], b[3][3], c[3][3];
    int m=3,n=3,p=3,q=3,i,j,k;

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            a[i][j]=(i+1)*3+9*j*((i+1)*3);
            printf("%d ", a[i][j]);
        
        }
        printf("\n");
    }


        printf("\n");
    
    
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            b[i][j]=3*(i+1)*6+(i+j+1)*2*(j+1);
            printf("%d ", b[i][j]);
        }
        printf("\n");   
    }

printf("\n");

    if (n==p)
    {
        for ( i = 0; i < m; i++)
        {
            for ( j = 0; j < q; j++)
            {
                c[i][j]=0;
                for ( k = 0; k < p; k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
                  printf("%d ", c[i][j]);
            }
          printf("\n");
        }
        
    }
    
    
return 0;
}