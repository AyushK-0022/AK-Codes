#include <stdio.h>
#include <string.h>
// length comparison
int main() {

    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 == len2) {
        printf("Both strings have the same length.\n");
    } else {
        printf("The lengths of the strings are different.\n");
        printf("Length of the first string: %d\n", len1);
        printf("Length of the second string: %d\n", len2);
    }

    return 0;
}