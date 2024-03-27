/* Palindrome Check Day-15 Task-1*/
#include <stdio.h>
#include <ctype.h>  // For tolower() function (optional)
int is_palindrome(const char *str) {
    int len = strlen(str);
    int i, j;
    for (i = 0, j = len - 1; i < j; i++, j--) 
	{
        // Convert characters to lowercase for case-insensitive comparison (optional)
        char ch1 = tolower(str[i]);
        char ch2 = tolower(str[j]);
        if (ch1 != ch2) 
		{
            return 0;  // Not a palindrome
        }
    }
    return 1;  // Palindrome
}
int main() 
{
    char input[100];
    printf("Enter a string or number: ");
    fgets(input, sizeof(input), stdin);
    // Remove trailing newline (optional)
    input[strcspn(input, "\n")] = '\0';

    if (is_palindrome(input)) 
	{
        printf("%s is a palindrome.\n", input);
    } else 
	{
        printf("%s is not a palindrome.\n", input);
    }
    return 0;
}

