#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int coeff;
    int expo;
    struct Node *next;
};

struct Node *poly1 = NULL;
struct Node *poly2 = NULL;

void addLast(struct Node **head, int c, int e)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->coeff = c;
    newNode->expo = e;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    struct Node *currNode = *head;
    while (currNode->next != NULL)
    {
        currNode = currNode->next;
    }
    currNode->next = newNode;
}

void printList(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty ...! \n");
        return;
    }
    struct Node *currNode = *head;
    while (currNode != NULL)
    {
        printf("%d ,%d", currNode->coeff, currNode->expo);
        currNode = currNode->next;
    }
    printf("Null \n");
}
int main()
{
    addLast(&poly1, 4, 3);
    // addLast(&poly1,1,3);
    // addLast(&poly1,5,3);
    // addLast(&poly1,8,3);
    // addLast(&poly1,3,3);
    // addLast(&poly1,4,3);
    // addLast(&poly1,7,3);
    // addLast(&poly1,5,3);
    // addLast(&poly1,6,3);
    printList(&poly1);
    return 0;
}