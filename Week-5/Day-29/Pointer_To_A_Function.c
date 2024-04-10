/*Pointer to a function Day-29 Task-1*/
#include <stdio.h>
// Function to add two numbers
int add(int a, int b) 
{
    return a + b;
}
// Function to multiply two numbers
int multiply(int a, int b) 
{
    return a * b;
}
int main() 
{
    // Declare a function pointer
    int (*operationPtr)(int, int);  // Pointer to a function taking two ints and returning an int
    // Assign the address of the add function to the pointer
    operationPtr = add;
    // Call the function using the pointer
    int result1 = operationPtr(5, 3);  // Equivalent to add(5, 3)
    printf("Addition result: %d\n", result1);
    // Assign the address of the multiply function to the pointer
    operationPtr = multiply;
    // Call the function using the pointer again
    int result2 = operationPtr(5, 3);  // Equivalent to multiply(5, 3)
    printf("Multiplication result: %d\n", result2);

    return 0;
}

