//Factors of a Number Day-17 Task-1
#include <stdio.h>
int main() 
{
    int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    // Iterate from 1 to the square root of num to find factors efficiently
    for (i = 1; i <= num / i; ++i) 
	{
        if (num % i == 0) 
		{
            printf("%d ", i);
            if (i != num / i)
			{  // Print the pair only once if it's not a perfect square
                printf("%d ", num / i);
            }
        }
    }
    printf("\n");
    return 0;
}

