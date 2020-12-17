#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int userAge;
    
    /* Need to assign a number to the variable (for the array) */
    char userName[20];
    printf("Please enter your name: ");
    
    /* where you wanna store it, max length, where from */
    fgets(userName, 20, stdin);

    printf("Please enter your age: ");
    
    /* & for pointer where the variable should be stored */
    scanf("%d", &userAge);
    
    
    printf("Hey %s! You are %d years old :)\n", userName, userAge);

    return 0;
}