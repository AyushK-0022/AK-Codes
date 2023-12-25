//String length calculation without using function.
#include <stdio.h>
#include <string.h>

int main()
{
    int length;

    char str[1000];

    printf("\nEnter the String: ");
    for (int i = 0; i < 1000; i++)
    {
        scanf("%c", &str[i]);
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }

    length = strlen(str);

    printf("\nLength of the String is: %d", length);
    return 0;
}