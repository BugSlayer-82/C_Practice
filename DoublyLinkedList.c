#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
    struct Node * prev;
};

struct Node * head = NULL;  

void addFirst(int data){
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = data;
    
}

void addLast(int data){
    struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data = data;
}

void deleteFirst(){
    struct Node * temp = head;
}

void deleteLast(){
    struct Node * temp = head;
}

void addAtIndex(int data,int idx){
    struct Node * currNode = head;
}

void printList(){
    struct Node * currNode = head;
}

int count(){
    int count = 0;

    return count;
}

void search(){
    struct Node * currNode = head;

}

int main(){
    return 0;
}