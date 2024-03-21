/*Taking Input from User*/
#include <stdio.h>
int main() 
{
    char name[50], Branch[50], College[50],Rollnumber[10]; 
    
    printf("\n Enter The Roll_Number : ");
    scanf("%s", Rollnumber);

    printf("\n Enter Your Name: ");
    scanf("%s", name);

    printf("\n Enter Your Branch: ");
    scanf("%s", Branch);

    printf("\n Enter Your College: ");
    scanf("%s", College);

    printf("************** ### ****************");
    printf("\n Hey !!! Let me Introduce about Myself\n");
    printf("\n I'm %s", name);  
    printf(" & I'm pursuing 1st Year B.Tech in Specialization %s\n", Branch);
    printf(" and My Roll Number is %d\n", Rollnumber);
    printf("at %s\n", College);

    return 0;
}
