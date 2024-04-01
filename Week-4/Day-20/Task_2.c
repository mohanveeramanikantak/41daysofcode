/*Insertion at a specific position Task-2 Day-20*/
#include <stdio.h>
void insertAtPosition(int arr[], int *n, int capacity, int newElement, int position) 
{
  int i;
  if (*n >= capacity) 
  {
    printf("Array overflow\n");
    return;
  }
  if (position < 0 || position > *n) 
  {
    printf("Invalid position\n");
    return;
  }

  // Shift elements to the right from the insertion position
  for (i = *n - 1; i >= position; i--) 
  {
    arr[i + 1] = arr[i];
  }

  arr[position] = newElement; // Insert at the desired position
  (*n)++; // Increment the number of elements
}

int main() 
{
  int i;	
  int arr[100] = {1, 2, 3, 4};
  int n = 4; // Current number of elements in the array
  int capacity = 100; // Maximum capacity of the array

  insertAtPosition(arr, &n, capacity, 5, 2); // Insert 5 at position 2

  printf("Array after insertion: ");
  for (i = 0; i < n; i++) 
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

