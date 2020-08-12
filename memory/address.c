#include <stdio.h>
#include <stdlib.h>

int main(){

    int address = 2;
    double address2 = 3.14;

    printf("%p \n", &address);
    printf("%p \n", &address2);

    return 0;
}