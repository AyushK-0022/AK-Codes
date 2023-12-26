#include <stdio.h>
#include <string.h>
//reverse of string
void reverseString(char str[], int length) {
    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char inputString[100]; 
    printf("Enter a string: ");

    char c;
    int i = 0;
    while ((c = getchar()) != '\n') {
        inputString[i] = c;
        i++;
    }

    inputString[i] = '\0';

    int length = strlen(inputString);

    reverseString(inputString, length);

    printf("Reversed string: %s\n", inputString);

    return 0;
}