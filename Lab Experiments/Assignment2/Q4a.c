// WAP to check if the string is a palindrome or not. Example of Palindrome: 12321; NITIN; MALAYALAM
#include <stdio.h>
#include <string.h>

void strrev(char str[50], int l)
{
    char temp;
    for (int i = 0; i < l / 2; i++)
    {
        temp = str[i];
        str[i] = str[l - 1 - i];
        str[l - 1 - i] = temp;
    }
}

int main()
{
    char str[50], ch;
    int count = 0;
    printf("\nEnter the String: ");
    for (int i = 0; i < 50; i++)
    {
        scanf("%c", &str[i]);
        ch = str[i];
        if (ch == '\n')
        {
            str[i] = '\0';
            break;
        }
        count++;
    }

    char str1[50];
    strcpy(str1, str);

    int l = count;

    strrev(str, l);
    int n = strcmp(str1, str);

    if (n == 0)
    {
        printf("\nThe Entered String is a Palindrome.");
    }
    else
        printf("\nThe Entered String is not a Palindrome.");

    return 0;
}