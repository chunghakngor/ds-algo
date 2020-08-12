#include <stdio.h>
#include <stdlib.h>


int main() {
    char line[100];
    FILE * fpointer = fopen("random.txt", "r"); 
    fgets(line, 100, fpointer);
    fgets(line, 100, fpointer);
    printf("%s\n", line);

    fclose(fpointer);
    return 0;
}