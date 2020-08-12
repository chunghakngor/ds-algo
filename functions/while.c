#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    while(num > 0){
        printf("%d \n", num);
        num--;
    }
    
    /* do {
        printf("%d \n", num);
        num--;
    } while(num > 0); */
    return 0;
}