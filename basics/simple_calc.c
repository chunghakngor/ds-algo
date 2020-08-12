#include <stdio.h>
#include <stdlib.h>

int main(){
    

    double num1;
    double num2;
    printf("Please enter a number you want to add: ");
    scanf("%lf", &num1);
    printf("Please enter the next number: ");
    scanf("%lf", &num2);

    printf("The sum of those numbers are %f", num1 + num2);

    return 0;
}