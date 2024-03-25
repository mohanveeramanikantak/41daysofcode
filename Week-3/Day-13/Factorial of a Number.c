/*Factorial of a Number Day-13 Task-1*/
#include <stdio.h>
unsigned long long factorial(int n) 
{
	int i;
	if (n < 0) 
	{
    	printf("Error: Factorial is not defined for negative numbers.\n");
    	return 1;  // Indicate error
    } 
	else if (n == 0)
	{
    	return 1;
    } 
	else 
	{
    	unsigned long long result = 1;
    	for ( i = 2; i <= n; ++i) 
		{
      		result *= i;
    	}
    	return result;
	}
}
int main() 
{
  int num;
  printf("Enter a non-negative integer: ");
  scanf("%d", &num);
  unsigned long long fact = factorial(num);
  if (fact != 1) 
  {
    printf("The factorial of %d is %llu\n", num, fact);
  }
  return 0;
}

