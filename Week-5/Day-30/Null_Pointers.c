/*Null Pointer Task-1 Day-30*/
#include <stdio.h>
int main()
{
    int *ptr;  // Declare an integer pointer

    printf("ptr before initialization: %p\n", ptr);
    // Initialize ptr to NULL (pointing to nowhere)
    ptr = NULL;
    // Check if ptr is NULL before dereferencing (important!)
    if (ptr == NULL) 
	{
        printf("ptr is NULL. Cannot access memory location.\n");
    } else 
	{
        // This code would cause a segmentation fault if ptr weren't NULL
        // *ptr = 10;  // Dereferencing a NULL pointer (unsafe)
    }
    return 0;
}

