#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    printf("Please enter your grade: ");
    scanf("%c", &grade);
    switch (grade)
    {
    case 'A':
        printf("Excellent, you did really well! \n");
        break;
    case 'B':
        printf("Good job, you did great! \n");
        break;
    case 'C':
        printf("Well done, you could do better! \n");
        break;
    default:
        printf("You could really have done better! \n");
        break;
    }

    return 0;
}