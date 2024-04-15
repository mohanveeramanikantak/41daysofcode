/*Fibonacci series using recursion Task-1 Day-33*/
#include <stdio.h>
int fibonacci(int n) 
{
    if (n <= 1) 
	{
        return n;
    } 
	else 
	{
    	
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() 
{
    int num,i;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ");
    for (i = 0; i < num; i++) 
	{
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

