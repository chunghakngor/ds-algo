#include <stdio.h>
#include <stdlib.h>

void sayHello(char userName[]){
    printf("Hello %s!\n", userName);
}

void sayHelloWithAge(char userName[], int userAge){
    printf("Hello %s! You are %d years old\n", userName, userAge);
}

/* return type, function name */
int main(){
    sayHello("John");
    sayHello("Bob");
    sayHelloWithAge("Chung", 23);
    return 0;
}

