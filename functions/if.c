#include <stdio.h>
#include <stdlib.h>

int maxNum(int a, int b){
    if (a > b){
        return a;
    } else {
        return b;
    }
}

int main(){
    int a, b;
    printf("Please enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d is bigger", maxNum(a, b));
    return 0;
}