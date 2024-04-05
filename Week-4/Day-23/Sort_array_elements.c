/*Sort array elements  Day-23 Task-1*/
#include <stdio.h>
void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int n) 
{
    int i, j, min_idx;
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) 
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++) 
		{
            if (arr[j] < arr[min_idx]) 
			{
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}
int main() 
{
	int i;
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array: \n");
    for ( i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    selectionSort(arr, n);

    printf("\nSorted array: \n");
    for ( i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    return 0;
}

