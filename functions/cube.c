#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cube(double num){
    double result = pow(num, 3);
    return result;
}

int main(){
    int userNum;
    printf("Please number a number to cube: ");
    scanf("%d", &userNum);
    printf("%d cubed is %f", userNum, cube(userNum));
    return 0;
}