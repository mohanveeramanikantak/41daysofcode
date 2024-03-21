/* Reversing the Case of a Character: Convert uppercase to lowercase and vice versa */
#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (isupper(ch)) {
        ch = tolower(ch);  // Convert to lowercase
    } else if (islower(ch)) {
        ch = toupper(ch);  // Convert to uppercase
    }

    printf("The converted character is: %c\n", ch);

    return 0;
}

