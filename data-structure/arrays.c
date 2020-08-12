#include <stdio.h>
#include <stdlib.h>

int main(){

    /* {} for array instead of [] */ 
    int numsOfPi[] = {3, 1, 4, 1, 5};

    double randomNums[10];

    for (int i = 0; i < 10; i++){
        printf("Please enter a random num: ");
        scanf("%lf", &randomNums[i]);
    }
    
    for (int i = 0; i < 10; i++){
        printf("%f \n", randomNums[i]);
    }

    return 0;
}