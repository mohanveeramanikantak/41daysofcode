/*Sum of first N numbers recursively Task-1 Day-34*/
#include <stdio.h>
int sum(int n) 
{
  if (n <= 1)
  {
    return n;
  } 
  else
  {
    return n + sum(n - 1);
  }
}
int main() 
{
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  if (n < 0) 
  {
    printf("Invalid input. Please enter a positive integer.\n");
    return 1;
  }
  int result = sum(n);
  printf("The sum of the first %d natural numbers is %d\n", n, result);

  return 0;
}

