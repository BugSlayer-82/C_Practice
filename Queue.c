#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void offer(int data){
    if(rear == SIZE - 1){
        printf("Queue is full ...!\n");
        return;
    }
    rear++;
    queue[rear] = data;
    if(front == -1){
        front = 0;
        printf("Front shift to  0 \n");
    }
    printf("Data inserted \n");
}

int delete(){
    if(rear == -1 && front == -1){
        printf("Queue is empty ...! \n");
        return -1;
    }
    int data = queue[front];
    front++;
    if(front > rear){
        front = -1;
        rear = -1;
    }
    return data;
}

void printQueue(){
    if(rear == -1 && front == -1){
        printf("Queue is empty ...!\n");
        return;
    }
    for(int i = 0; i <= rear; i++){
        printf("%d \n",queue[i]);
    }
}

int main(){

    offer(10);
    offer(20);
    offer(30);
    offer(40);
    offer(50);
    // printf("%d \n",delete());
    // printf("%d \n",delete());
    // printf("%d \n",delete());
    // printf("%d \n",delete());
    // printf("%d \n",delete());
    printQueue();

    return 0;
}