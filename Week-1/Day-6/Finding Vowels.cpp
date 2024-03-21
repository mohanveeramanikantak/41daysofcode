/*Finding Vowels Task-1 Week-1 , Day-6*/
#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("The alphabet is a vowel.\n");
    } else if (isalpha(ch)) {
        printf("The alphabet is a consonant.\n");
    } else {
        printf("Invalid input. Please enter an alphabet.\n");
    }

    return 0;
}

