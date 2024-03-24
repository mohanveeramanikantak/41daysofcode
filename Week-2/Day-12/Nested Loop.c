/*Nested Loop Day-12 Task-1*/
#include <stdio.h>
int main() 
{
	int i, j;
	for (i = 1; i <= 2; i++)  // Outer loop
	{
		printf("Outer Shell: %d\n", i);  // Executes 2 times
    		
    	for (j = 1; j <= 3; j++) // Inner loop
		{
			printf(" Inner Commend : %d\n", j);  // Executes 6 times (2 * 3)
    	}	
	}
  	return 0;
}
