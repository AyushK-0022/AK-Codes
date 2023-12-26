#include <stdio.h>
// length comparison
int stringLength(const char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    int max_length = 100;

    char str1[max_length];
    char str2[max_length];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    int length1 = stringLength(str1);
    int length2 = stringLength(str2);

    if (length1 == length2) {
        printf("Both strings have the same length.\n");
    } else {
        printf("The lengths of the strings are different.\n");
        printf("Length of the first string: %d\n", length1);
        printf("Length of the second string: %d\n", length2);
    }

    return 0;
}