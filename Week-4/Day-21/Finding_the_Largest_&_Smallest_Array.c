/*Finding the Largest and smallest Array Day-21 Task-1*/
#include <stdio.h>
int main() 
{
    int i;
	int arr[] = {10, 25, 12, 7, 30};
    int n = sizeof(arr) / sizeof(arr[0]); // Get the array size

    int largest = arr[0], smallest = arr[0];

    // Iterate through the array
    for (i = 1; i < n; i++) 
	{
        // Check for largest element
        if (arr[i] > largest) 
		{
            largest = arr[i];
        }

        // Check for smallest element (combined in same loop)
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}

