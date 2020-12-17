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

/* add to the head of the linked list */
void push(struct Node** headRef, int new_data){
    /* create a new node */
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    /* assign new node the data */
    new_node->data = new_data;
    /* assign next to previous head */
    new_node->next = (*headRef);
    /* new node as new head */
    (*headRef) = new_node;
}

void pop(struct Node** headRef){
    /* Check if the linked list is empty */
    if(headRef == NULL){
        printf("Linked List is empty\n");
        return;
    } else {
        /* Store the reference of head */
        struct Node* temp = *headRef;
        /* assign the head pointer to the next node */
        *headRef = temp->next;
        /* free the memory at the previous head */
        free(temp);
        return;
    }
}

void deleteNode(struct Node** headRef, int key){
    /* double pointer store the head and previous node */
    struct Node* temp = *headRef, *prev;
    /* check if the head pointer is currently null */
    if (temp == NULL){
        printf("Linked List is empty\n");
        return;
        /* check if the head pointer is the key we want to delete */
    } else if (temp != NULL && temp->data == key){
        /* store the new head at the current head pointer */
        *headRef = temp->next;
        /* free up the memory at the current head */
        free(temp);
        return;
    } else {
        /* find the key we want to delete */
        while (temp != NULL && temp->data != key){
            prev = temp;
            temp = temp->next;
        }
        /* if we cant find the key in the linked list */
        if (temp == NULL){
            printf("Key is not found in linked list");
            return;
        }
        /* if we do find it, set the previous next to the current (temp) next */
        prev->next = temp->next;
        /* free up the memory at the deleted node */
        free(temp);
    }
}

void insertAfter(struct Node* prevNode, int new_data){
    if (prevNode == NULL){
        printf("The previous node cannot be NULL \n");
        return;
    }
    /* create a new node */
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    /* assign new node the data */
    new_node->data = new_data;
    /* assign next to previous next node */
    new_node -> next = prevNode -> next;
    /* assign previous node next to the new node */
    prevNode -> next = new_node;
}

void append(struct Node** headRef, int new_data){
    /* create a new node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    /* pointer for last node (starts from the head) */
    struct Node *last = *headRef;
    /* assign new node the data */
    new_node->data = new_data;
    /* set next of new node to NULL (last) */
    new_node->next = NULL;
    /* check to make sure that the head is not at the end */
    if (*headRef == NULL){
        *headRef = new_node;
        return;
    }
    /* find the last node */
    while(last->next != NULL){
        last = last->next;
    }
    /* assign the last node next to the new node */
    last->next = new_node;
    return;
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


    push(&head, 20);
    insertAfter(head, 30);
    printLinkedList(head);
    printf("\n");
    pop(&head);
    deleteNode(&head, 2);
    printLinkedList(head);

    return 0;
}