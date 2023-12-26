#include <stdio.h>
// remainder calculation using modulo operator 
int main() {
    int number, remainder;

    printf("Enter a number: ");

    scanf("%d", &number);

    remainder = number % 5; 

    switch (remainder) {
        case 0:
            printf("%d is divisible by 5.\n", number);
            break;
        case 1:
            printf("%d has a remainder of 1 when divided by 5.\n", number);
            break;
        case 2:
            printf("%d has a remainder of 2 when divided by 5.\n", number);
            break;
        case 3:
            printf("%d has a remainder of 3 when divided by 5.\n", number);
            break;
        case 4:
            printf("%d has a remainder of 4 when divided by 5.\n", number);
            break;
        default:
            printf("Invalid case.\n");
    }

    return 0;
}