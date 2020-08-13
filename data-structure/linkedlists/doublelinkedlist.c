#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

void push(struct Node** headRef, int new_data){
    /* create new node */
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    /* assign new node the data */
    new_node->data = new_data;
    /* set new node next to the head */
    new_node->next = (*headRef);
    /* set new node previous to null */
    new_node->prev =  NULL;
    /* if current head is not empty, set the previous to new node*/
    if((*headRef) != NULL){
        (*headRef)->prev = new_node;
    }
    /* assignt new node to header pointer */
    (*headRef) = new_node;
}

void insertAfter(struct Node* prevNode, int new_data){
    /* if the previous node is empty */
    if (prevNode == NULL){
        printf("Previous node cannot be NULL");
        return;
    }
    /* creating new node */
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    /* assign new node the data*/
    new_node->data = new_data;
    /* assign the new node next to the previous node next*/
    new_node->next = prevNode->next;
    /* assignt previous node next to the new node*/
    prevNode->next = new_node;
    /* assign the new node previous to the previous node */
    new_node->prev = prevNode;
    /* if the  new node is at the end */
    if(new_node->next != NULL){
        new_node->next->prev = new_node;
    }
}

void append(struct Node** headRef, int new_data){
    /* pointer from the header to store the last node*/
    struct Node* last = *headRef;
    /* creation of new node */
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    /* assign new node the data*/
    new_node->data = new_data;
    /* assign the new node next to null*/
    new_node->next = NULL;
    /* if the header pointer is null */
    if (*headRef == NULL){
        /* assing the previous node to be null */
        new_node->prev = NULL;
        /* and set the header pointer to the new node */
        *headRef = new_node;
        return;
    }
    /* find the last node */
    while(last != NULL){
        last = last->next;
    }
    /* assign the last node next to the new node*/
    last->next = new_node;
    /* assignt the new node previous pointer to the previous node*/
    new_node->prev = last;
    return;
}

void insertBefore(struct Node** headRef, struct Node* nextNode, int new_data){
    /* check if the next node is null */
    if (nextNode == NULL) {  
        printf("Next node cannot be NULL");  
        return;  
    }  
    /* creation of the new node */
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));  
    /* assign the new node data*/
    new_node->data = new_data;  
    /* assign the new node previous to the be next node previous */
    new_node->prev = nextNode->prev;  
    /* assign the next node previous to the be new node*/
    nextNode->prev = new_node;  
    /* assign the new node next to be the next node */
    new_node->next = nextNode;  
    /* if the new node previous is null */
    if (new_node->prev != NULL){
        new_node->prev->next = new_node;  
    }  else {
        /* assignt the new node to the header pointer*/
        (*headRef) = new_node;
    }     
}


void printLinkedList(struct Node* node){
    /* while the node is not null*/
    while(node != NULL){
        printf("%d \n", node->data);
        node = node->next;
    }
}


int main(){
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    struct Node* tail = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    tail = (struct Node*)malloc(sizeof(struct Node));

    head->data = 0;
    head->next = second;
    head->prev = NULL;

    second->data = 1;
    second->next = third;
    second->prev = head;

    third->data = 2;
    third->next = tail;
    third->prev = second;

    tail->data = 3;
    tail->next = NULL;
    tail->prev = third;

    printLinkedList(head);

    printf("\n");

    push(&head, 3);
    push(&head, 1); 
    push(&head, 4);

    printLinkedList(head);

    return 0;
}