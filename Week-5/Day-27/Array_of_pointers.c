/*Array of pointers Task-1 Day-27*/
#include <stdio.h>
int main() 
{
    // Declare an array of 3 pointers to integers
    int *ptr_array[3];
	int i;
    // Initialize elements of the pointer array
    ptr_array[0] = malloc(sizeof(int));  // Allocate memory for 1st integer
    ptr_array[1] = malloc(sizeof(int));  // Allocate memory for 2nd integer
    ptr_array[2] = malloc(sizeof(int));  // Allocate memory for 3rd integer

    // Assign values to the integers pointed to by the array
    *ptr_array[0] = 10;
    *ptr_array[1] = 20;
    *ptr_array[2] = 30;

    // Print the values stored in the integers
    printf("Values in the array of pointers:\n");
    for (i = 0; i < 3; i++) 
	{
        printf("%d\n", *ptr_array[i]);
    }
    // Free the allocated memory to prevent memory leaks
    for (i = 0; i < 3; i++)
	{
        free(ptr_array[i]);
    }

    return 0;
}

