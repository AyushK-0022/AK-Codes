#include <stdio.h>

    int GenNum(int b){
        int i,j,k=3;
        for ( i = 0; i < b; i++)
        {
            j= 4*k*(1-3*i);
        }
        
    return j;

}

void main(){
    int x,i;
    i=100;
    x= GenNum(i);
    printf("%d", x);
}