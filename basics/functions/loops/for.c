#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
       printf("%d \n", i);
    }
    
    return 0;
}