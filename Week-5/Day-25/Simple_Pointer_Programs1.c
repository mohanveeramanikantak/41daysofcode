/*Simple pointer programs Task-2 Day-25*/
//Program 2: Modifying the value of a variable using a pointer
#include <stdio.h>
int main() 
{
  int num = 20;
  int *ptr = &num;

  printf("Original value of num: %d\n", num);
  *ptr = 30; // Modify the value at the address pointed to by ptr
  printf("Modified value of num: %d\n", num);

  return 0;
}

