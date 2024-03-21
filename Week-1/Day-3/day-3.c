#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);  // Add a space before %c to avoid issues with newline

    int ascii_value = (int)character;

    printf("The ASCII value of '%c' is %d\n", character, ascii_value);

    return 0;
}

