#include <stdio.h>
#include <stdlib.h>


int main() {

    FILE * fpointer = fopen("random.txt", "w"); 
    // change w to a for append mode

    fprintf(fpointer, "Hello World");

    fclose(fpointer);

    return 0;
}