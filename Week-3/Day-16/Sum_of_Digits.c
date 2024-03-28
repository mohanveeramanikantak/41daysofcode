/*Sum of Digits Task-1 Day-16 */
#include <stdio.h>
int main() 
{
    int num, sum = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    // Handle negative numbers (optional)
    if (num < 0) 
	{
        printf("Sum of digits for negative numbers is undefined.\n");
        return 1;
    }
    // Extract and add digits until the number becomes 0
    while (num != 0) 
	{
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }
    printf("Sum of digits of %d is %d\n", num, sum);
    return 0;
}

