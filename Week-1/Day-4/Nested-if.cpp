/*Nested If Sst in Task-3 Day4*/
#include <stdio.h>
int main() {
    int number, isPositive, isEven;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check for positive or negative
    isPositive = (number > 0);  // Concise boolean assignment

    if (isPositive) {
        printf("The number is positive.\n");

        // Check for even or odd within positive numbers
        isEven = (number % 2 == 0);  // Efficient evenness check

        if (isEven) {
            printf("The number is even.\n");
        } else {
            printf("The number is odd.\n");
        }
    } else {
        printf("The number is non-positive (zero or negative).\n");
    }

    return 0;
}

