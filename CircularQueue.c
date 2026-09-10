#include <stdio.h>
#define MAX 5

int Queue[MAX];
int front = -1;
int rear = -1;

int isEmpty()
{
    if (front == -1 && rear == -1)
    {
        return 1;
    }
    return 0;
}

int isFull()
{
    if (rear == MAX - 1)
    {
        return 1;
    }
    return 0;
}

void offer(int data)
{
    if ((rear + 1) % MAX == 0)
    { // Case 1 : Queue is Full
        printf("Queue is Full ...! \n");
        return;
    }
    if (isEmpty()) // Case 2 : Queue is empty
    {
        front = rear = 0;
    }
    else if (rear == MAX && front != 0) // Case 3 : Begin elements are deleted
    {
        rear = 0;
    }
    else
    {
        rear++; 
        Queue[rear] = data; // Insert the element
    }
    printf("Data Inserted ...! \n");
}

int main()
{

    return 0;
}