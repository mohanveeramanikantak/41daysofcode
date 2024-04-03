/*Sum of elements using arrays Day-22 Task-1 */
#include <stdio.h>
int main() 
{
    int arr[] = {1, 2, 3, 4, 5}; // Sample array of numbers
    int i;
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    int sum = 0; // Initialize a variable to store the sum

    // Loop through the array elements and add them to the sum
    for ( i = 0; i < n; i++) 
	{
        sum += arr[i];
    }

    printf("The sum of the elements in the array is: %d\n", sum);

    return 0;
}

