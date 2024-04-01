#include <stdio.h>

void deleteElement(int arr[], int *n, int element) 
{
  int position = -1;
  int i;

  // Find the position of the element to delete
  for (i = 0; i < *n; i++) 
  {
    if (arr[i] == element)
	{
      position = i;
      break;
    }
  }

  if (position == -1) 
  {
    printf("Element not found\n");
    return;
  }

  // Shift elements to the left from the deletion position
  for (i = position; i < *n - 1; i++) 
  {
    arr[i] = arr[i + 1];
  }

  (*n)--; // Decrement the number of elements
}

int main() 
{
  int arr[] = {1, 2, 3, 4, 5};
  int i;
  int n = 5; // Current number of elements in the array

  deleteElement(arr, &n, 3); // Delete element 3

  printf("Array after deletion: ");
  for ( i = 0; i < n; i++) 
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

