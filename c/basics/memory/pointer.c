#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 13;
    int * pNum = &num;

    printf("%p: %d \n", &num, num);

    *pNum = 30;
    printf("%p: %d\n", pNum, *pNum);
    printf("%p: %d \n", &num, num);

    return 0;
}