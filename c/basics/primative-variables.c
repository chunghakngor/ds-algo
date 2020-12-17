#include <stdio.h>
#include <stdlib.h>

int main(){
    const int AGE = 23;
    char NAME[] = "Chung";
    char CITY[] = "Auckland";
    char COUNTRY[] = "New Zealand";

    printf("Hey, my name is %s\n", NAME);
    printf("I am %d years old\n", AGE);
    printf("I live in %s, %s\n", CITY, COUNTRY);
    printf("Bye, from %s\n", "Chung Hak Ngor");

    return 0;
}