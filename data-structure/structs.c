#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[30];
    char major[50];
    int age;
    double gpa;
};


int main(){

    struct Student student1;
    strcpy(student1.name, "Chung Hak Ngor");
    strcpy(student1.major, "Computer Science");
    student1.age = 23;
    student1.gpa = 7.5;

    printf("%s studies %s. He is %d and has a GPA of %f \n", student1.name, student1.major, student1.age, student1.gpa);

    struct Student student2;
    strcpy(student2.name, "Frank McHamburger");
    strcpy(student2.major, "Accounting");
    student2.age = 22;
    student2.gpa = 7.1;

    printf("%s studies %s. He is %d and has a GPA of %f \n", student2.name, student2.major, student2.age, student2.gpa);

    return 0;
}