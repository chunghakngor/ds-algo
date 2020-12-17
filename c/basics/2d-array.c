#include <stdio.h>
#include <stdlib.h>

int main(){

    int numsArray[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("%d -> %d", numsArray[0][0], numsArray[2][2]);

    return 0;
}