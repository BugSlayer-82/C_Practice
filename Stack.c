#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int data);
void pop();
int peek();
void printStack();
int size();

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printStack();
    pop();
    printf("Peek data --> %d \n",peek());
    pop();
    printStack();
    printf("Size of stack --> %d \n",size());
    
    return 0;
}

void push(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

void pop()
{
    if (top == NULL)
    {
        printf("Stack is Underflow ..! \n");
        return;
    }
    struct Node *temp = top;
    top = top->next;
    printf("Deleted data ==> %d \n", temp->data);
    free(temp);
}

int peek()
{
    if (top == NULL)
    {
        printf("Stack is Underflow ..! \n");
        return -1;
    }
    return top->data;
}

void printStack()
{
    if (top == NULL)
    {
        printf("Stack is Empty ...!\n");
        return;
    }
    struct Node *currTop = top;
    while (currTop != NULL)
    {
        printf("Data --> %d \n", currTop->data);
        currTop = currTop->next;
    }
}

int size(){
    int count=0;
    if(top == NULL){
        return 0;
    }
    struct Node *currTop = top;
    while(currTop != NULL){
        count++;
        currTop = currTop -> next;
    }
    return count;
}