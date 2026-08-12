#include <stdio.h>
#include <stdlib.h>

// * Define rule for node of linkedlist 
struct Node{
    int data; // Actual data in node
    struct Node * next; // Pointer to the next node 
};

struct Node *head = NULL; // Declare the head variable
 
void addFirst(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = data; // To assign the data to newNode
    newNode -> next = head; // To point the next of newNode to head
    head = newNode; // To assign the newNode to head
}

void addLast(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> next = NULL;
    if(head == NULL){
        head = newNode;
        return;
    }
    struct Node* currNode = head;
    while(currNode -> next != NULL){
        currNode = currNode -> next;
    }
    currNode -> next = newNode;
    currNode = newNode;
}

void deleteFirst(){
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    struct Node * currNode = head;
    // printf("%d \n", currNode -> data);
    free(currNode);
    head = head -> next;
}

void deleteLast(){
    if(head == NULL){
        printf("List is empty \n");
        return;
    }else if(head -> next == NULL){
        free(head);
        head = NULL;
        return;
    }
    struct Node * currNode = head;
    while(currNode -> next -> next != NULL){
        currNode = currNode -> next;
    }
    // printf("%d \n",currNode -> next -> data);
    free(currNode -> next);
    currNode -> next = NULL;
}
void printList(){
    struct Node * currNode = head;
    if(head == NULL){
        printf("NULL \n");
        return;
    }
    while(currNode != NULL){
        printf("%d -> ",currNode -> data);
        currNode = currNode -> next;
    }
    printf("NULL\n");   
}

int search(int x){
    if(head == NULL){
        return 0;
    }
    struct Node * currNode = head;
    while(currNode != NULL){
        if(currNode -> data == x){
            return 1;
        }
        currNode = currNode -> next;
    }
    return 0;
}

int main(){
    addFirst(3);
    // addFirst(2);
    // addFirst(1);
    // addLast(4);
    // addLast(5);
    // addLast(6);
    printList();
    // deleteFirst();
    // deleteFirst();
    deleteLast();
    deleteLast();
    printList();

    // if(search(50)){
    //     printf("X is found : True \n");
    // }else{
    //     printf("X is found : False \n");
    // }
    return 0;
}