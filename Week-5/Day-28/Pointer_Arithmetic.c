/*Pointer arithmetic Day-28* Task-1 */
#include <stdio.h>
int main() 
{
	int i;
    int numbers[5] = {10, 20, 30, 40, 50}; // Array of integers
    int *ptr = numbers;                  // Pointer 'ptr' initialized to point to the first element of 'numbers'
    printf("Original array elements:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("%d ", numbers[i]);
    }
    printf("\n");
    // Pointer arithmetic operations:
    // 1. Incrementing pointer:
    ptr++;  // Move pointer to the next element (numbers[1])
    printf("Value pointed to by ptr after increment: %d\n", *ptr);
    // 2. Decrementing pointer:
    ptr--;  // Move pointer back to the first element (numbers[0])
    printf("Value pointed to by ptr after decrement: %d\n", *ptr);
    // 3. Adding an integer to a pointer:
    ptr += 2;  // Move pointer to the third element (numbers[2])
    printf("Value pointed to by ptr after adding 2: %d\n", *ptr);
    // 4. Subtracting an integer from a pointer:
    ptr -= 1;  // Move pointer back to the second element (numbers[1])
    printf("Value pointed to by ptr after subtracting 1: %d\n", *ptr);
    // 5. Subtracting two pointers (assuming they point to the same array):
    int *ptr2 = numbers + 3;  // Pointer 'ptr2' points to the fourth element (numbers[3])
    int difference = ptr2 - ptr;  // Calculate the difference in elements between ptr and ptr2 (2)
    printf("Difference between ptr2 and ptr (number of elements): %d\n", difference);

    return 0;
}

