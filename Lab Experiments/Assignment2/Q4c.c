//Catenate two Strings.
#include<stdio.h>
#include<string.h>

void catenate_string(char str1[1000], char str2[1000]){
    strcat(str1, str2);
}

int main(){
    int length;
    char str1[1000], str2[1000], ch;

    printf("\nEnter the First String: ");
    for (int i = 0; i < 1000; i++)
    {
        scanf("%c", &str1[i]);
        ch = str1[i];
        if (ch == '\n')
        {
            str1[i] = '\0';
            break;
        }
    }

    printf("\nEnter the Second String: ");
    for (int i = 0; i < 1000; i++)
    {
        scanf("%c", &str2[i]);

        if (str2[i] == '\n')
        {
            str2[i] = '\0';
            break;
        }
    }

    catenate_string(str1,str2);
    printf("\nThe Concatenated String is: '%s'", str1);

return 0;
}