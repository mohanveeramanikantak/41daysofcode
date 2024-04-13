/*Adding two numbers recursively Task-1 Day-31*/
#include <stdio.h>
int addRecursive(int a, int b) 
{
  // Base case: If b is 0, return a (a + 0 = a)
  if (b == 0) 
  {
    return a;
  } 
  else 
  {
    // Recursive case: Add 1 to a and call the function again with b-1
    // (a + 1) + (b-1) = a + b
    return addRecursive(a + 1, b - 1);
  }
}
int main() 
{
  int num1, num2, sum;
  printf("Enter The  First numbers: ");
  scanf("%d", &num1);
  printf("Enter The  Second numbers: ");
  scanf("%d", &num2);
  
  sum = addRecursive(num1, num2);

  printf("The sum of %d and %d is %d\n", num1, num2, sum);

  return 0;
}

