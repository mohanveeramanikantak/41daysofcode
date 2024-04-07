
/*Memory management Day-26 Task-1*/
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int i;
	int *ptr = (int *)malloc(sizeof(int) * 5);  // Allocate memory for 5 integers
    if (ptr != NULL) 
	{
        // Use the allocated memory (e.g., ptr[0] = 42)
        for (i = 0; i < 5; i++) 
		{
            ptr[i] = i * 10;
        }
        free(ptr);  // Release memory when done
    } else 
	{
        printf("Memory allocation failed!\n");
    }

    return 0;
}

