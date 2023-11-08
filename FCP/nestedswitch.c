#include<stdio.h>
int main(){
     int a=7, b=5;

    switch (a)
    {
    case 7:
        printf("Outer Loop\n");
        switch (b)
        {
        case 5:
            printf("Inner Loop");
            break;
        
        }
        break;
    
        break;
    }

return 0;
}