/*Basic Array Programm Task-1 Day-19*/
#include <stdio.h>
int main() 
{
    // 1. Array declaration:
    int i, numbers[5]; // Declares an array named 'numbers' that can hold 5 integers

    // 2. Array initialization (optional):
    numbers[0] = 10;  // Assigns the value 10 to the first element (index 0)
    numbers[1] = 20;  // Assigns the value 20 to the second element (index 1)
    numbers[2] = 30;  // Assigns the value 30 to the third element (index 2)
    numbers[3] = 40;  // Assigns the value 40 to the fourth element (index 3)
    numbers[4] = 50;  // Assigns the value 50 to the fifth element (index 4)

    // 3. Accessing array elements:
    printf("The first element is: %d\n", numbers[0]);  // Prints the value at index 0

    // 4. Looping through the array:
    for (i = 0; i < 5; i++) 
	{
        printf("Element %d: %d\n", i + 1, numbers[i]);  // Prints all elements with labels
    }

    return 0;
}

