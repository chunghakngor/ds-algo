#include <stdio.h>
#include <stdlib.h>

struct Node{ 
    int data; 
    struct Node* next; 
}; 

void printLinkedList(struct Node* n){
    while(n != NULL){
        printf("%d \n", n->data);
        n = n->next;
    }
}

int main(){
    
    struct Node* head = NULL; 
    struct Node* second = NULL; 
    struct Node* third = NULL; 
  
    // malloc (size_t) allocates request memory and returns a pointer
    head = (struct Node*)malloc(sizeof(struct Node)); 
    second = (struct Node*)malloc(sizeof(struct Node)); 
    third = (struct Node*)malloc(sizeof(struct Node)); 

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL; //termiante here since no pointer left to go to

    printLinkedList(head);

    return 0;
}