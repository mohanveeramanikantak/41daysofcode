/*Factorial using recursion Task-1 Day-32*/
#include <stdio.h>
// Function to calculate factorial
long long factorial(int n) 
{
  if (n == 0) 
  {
    return 1; // Base case: factorial of 0 is 1
  } 
  else 
  {
    return n * factorial(n - 1); // Recursive call
  }
}
int main() 
{
  int num;
  printf("Enter a non-negative integer: ");
  scanf("%d", &num);

  // Check for negative input (factorials are not defined for negative numbers)
  if (num < 0) 
  {
    printf("Error: Factorial is not defined for negative numbers.\n");
    return 1;
  }

  long long result = factorial(num);
  printf("The factorial of %d is %lld\n", num, result);

  return 0;
}

