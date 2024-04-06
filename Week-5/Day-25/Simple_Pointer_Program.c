/*Simple pointer programs Task-1 Day-25*/
//Program 1: Printing the value of a variable using a pointer
#include <stdio.h>
int main() 
{
  int num = 10;
  int *ptr = &num; // ptr stores the memory address of num

  printf("Value of num: %d\n", num);
  printf("Address of num: %p\n", &num);
  printf("Value stored at the address pointed to by ptr: %d\n", *ptr);

  return 0;
}


