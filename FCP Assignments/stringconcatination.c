#include <stdio.h>
#include <string.h>
// string concatination
int main() {
    char str1[50], str2[50], result[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    strcpy(result, str1); 
    strcat(result, str2);  

    printf("Concatenated string: %s\n", result);

    return 0;
}