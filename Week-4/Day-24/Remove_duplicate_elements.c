/*Remove duplicate elements Task-1 Day-24*/
#include <stdio.h>
void removeDuplicates(int arr[], int *n) 
{
    int k,i, j, unique = 0;

    // One by one compare each element with all remaining elements
    for (i = 0; i < *n - 1; i++) 
	{
        for (j = i + 1; j < *n; j++) 
		{
            // If duplicate is found, shift elements to left
            if (arr[i] == arr[j]) {
                for ( k = j; k < *n - 1; k++) 
				{
                    arr[k] = arr[k + 1];
                }
                (*n)--; // Decrement size (one element less)
                j--; // Since the element was shifted, need to check the same index again
            }
        }
        // Copy only unique elements
        arr[unique++] = arr[i];
    }

    // Handle the last element (may not be compared)
    arr[unique++] = arr[*n - 1];
}

int main() 
{
	int i;
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array before removing duplicates: \n");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }

    removeDuplicates(arr, &n);

    printf("\nArray after removing duplicates: \n");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }

    return 0;
}

