/*Insertion at the end (append) Task-1 Day-20*/
#include <stdio.h>
void insertAtEnd(int arr[], int *n, int capacity, int newElement) 
{
  if (*n >= capacity) 
  {
    printf("Array overflow\n");
    return;
  }
  arr[*n] = newElement; // Insert at the current end position
  (*n)++; // Increment the number of elements
}
int main() 
{
  int i;
  int arr[10] = {1, 2, 3};
  int capacity = sizeof(arr) / sizeof(arr[0]); // Get array size
  int n = 3; // Number of elements currently

  insertAtEnd(arr, &n, capacity, 4);

  printf("Array after insertion: ");
  for (i = 0; i < n; i++) 
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

