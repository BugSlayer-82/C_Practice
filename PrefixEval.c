#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

struct Node * top = NULL;

void push(int data){
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> next = top;
    top = newNode;
}

int pop(){
    if(top == NULL){
        printf("Stack is empty ...! \n");
        return -1;
    }
    int value = top -> data;
    top = top -> next;
    return value;
}

void printStack(){
    if(top == NULL){
        printf("NULL \n");
        return;
    }
    struct Node * currNode = top;
    while(currNode != NULL){
        printf("%d \n",currNode -> data);
        currNode = currNode -> next;
    }
}

int main(){


    
    // push(5);
    // push(4);
    // push(3);
    // push(2);
    // push(1);
    printStack();
    // printf("pop ==> %d \n", pop());
    return 0;
}
