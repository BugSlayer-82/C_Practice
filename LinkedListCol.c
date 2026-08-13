#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};
struct Node*head = NULL;

void addFirst(int data){
    struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> next = NULL;
    head = newNode;
}

void printList(){
    if(head == NULL){
        printf("List is empty ....\n");
        return ;
    }
    struct Node *currNode = head;
    while(currNode != NULL){
        printf("%d -> ",currNode -> data);
        currNode = currNode -> next;
    }
    printf("NULL \n");
}

int main(){
    addFirst(6);
    addFirst(5);
    addFirst(4);
    printList();
    return 0;
}