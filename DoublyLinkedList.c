#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head = NULL;

void addFirst(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    if (head != NULL)
    {
        head->prev = newNode;
    }
    newNode->prev = NULL;
    head = newNode;
}

void addLast(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> next = NULL;
    newNode -> prev = NULL;

    if(head == NULL){
        head = newNode;
        return;
    }

    struct Node * currNode = head;
    while(currNode -> next != NULL){
        currNode = currNode -> next;
    }
    currNode -> next = newNode;
    newNode -> prev = currNode;
}

void deleteFirst()
{
    if (head == NULL)
    {
        printf("List is empty .. \n");
        return;
    }
    struct Node *temp = head;
    head = head->next;
    if (head != NULL)
    {
        head->prev = NULL;
    }
    printf("Deleted Data : %d \n", temp->data);
    free(temp);
}

void deleteLast()
{
    if(head == NULL){
        printf("List is empty .. \n");
        return ;
    }
    if(head -> next == NULL){
        struct Node * temp = head;
        head = NULL;
        printf("Deleted Data : %d \n",temp->data);
        free(temp);
        return;
    }
    struct Node *currNode = head;
    while(currNode -> next != NULL){
        currNode = currNode -> next;
    }
    currNode -> prev -> next = NULL;
    printf("Deleted Data : %d \n",currNode -> data);
    free(currNode);
}

void addAtIndex(int data, int idx)
{
    struct Node *currNode = head;
}

void printList()
{
    if(head == NULL){
        printf("NULL \n");
        return;
    }
    struct Node *currNode = head;
    while(currNode != NULL){
        if(currNode -> next != NULL){
            printf("%d <--> ",currNode -> data);
        }else{
            printf("%d --> ",currNode -> data);
        }
        currNode = currNode -> next;
    }
    printf("NULL \n");
}

int count()
{
    if(head == NULL){
        return 0;
    }
    int count = 0;
    struct Node * currNode = head;
    while(currNode != NULL){
        count++;
        currNode = currNode -> next;
    }
    return count;
}

void search()
{
    struct Node *currNode = head;
}

int main()
{
    addFirst(5);
    addFirst(4);
    addFirst(3);
    addFirst(2);
    addFirst(1);
    printList();
    printf("Count : %d \n",count());
    deleteFirst();
    printf("Count : %d \n",count());
    printList();
    printf("Count : %d \n",count());
    deleteLast();
    printf("Count : %d \n",count());
    printList();
    printf("Count : %d \n",count());

    return 0;
}