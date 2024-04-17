/*Palindrome check using recursion Task-1 Day-35*/
#include <stdio.h>
#include <stdbool.h>
bool is_palindrome(char str[], int start, int end) 
{
    if (start >= end) 
	{
        return true;
    }
    return str[start] == str[end] && is_palindrome(str, start + 1, end - 1);
}
int main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    if (is_palindrome(str, 0, len - 1)) 
	{
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}

