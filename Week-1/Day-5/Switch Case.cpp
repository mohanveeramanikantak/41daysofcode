/*Switch Case Task-1 in Day-5*/
#include <stdio.h>
int main() {
    char grade;
    printf("Enter Your Grade : ");
    scanf("%s",&grade);
    switch (grade) 
	{
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good job!\n");
            break;
        case 'C':
            printf("You can do better.\n");
            break;
        case 'D':
            printf("Study harder next time.\n");
            break;
        case 'F':
            printf("Uh oh, you failed.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

    return 0;
}

