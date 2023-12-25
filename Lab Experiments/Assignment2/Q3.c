// String Reverse Without Library Function
#include <stdio.h>

int main()
{
    char str[100], temp, ch;
    int l, j = 0;
    printf("\nEnter the String: ");

    while (ch != '\n')
    {
        scanf("%c", &str[j]);
        ch = str[j];
        if (str[j] == '\n')
        {
            str[j] = '\0';
            break;
        }
        j++;
    }

    printf("\nThe Length of the string is: %d", j);

    for (int i = 0; i < j / 2; i++)
    {
        temp = str[i];
        str[i] = str[j - 1 - i];
        str[j - 1 - i] = temp;
    }

    printf("\n\nThe reversed String is: %s", str);
    return 0;
}