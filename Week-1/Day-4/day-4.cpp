/* If - else Task in Day-4 */
#include <stdio.h>
int main() 
{
  int number;
  printf("Enter an integer: ");
  scanf("%d", &number);

  if (number > 0) 
  {
    printf("%d is positive.\n", number);
  } 
  else if (number < 0) 
  {
    printf("%d is negative.\n", number);
  } else 
  {
    printf("%d is zero.\n", number);
  }
  return 0;
}

