#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

int pop()
{
    if (top == NULL)
    {
        printf("Stack is empty ...! \n");
        return -1;
    }
    struct Node *temp = top;
    int value = top->data;
    top = top->next;
    free(temp);
    return value;
}

int preFix(char exp[])
{
    int i = (sizeof(exp)/sizeof(exp[0])) - 1;
    while(exp[i] != '\0')
    {
        if (exp[i] >= '0' && exp[i] <= '9')
        {
            push(exp[i] - '0');
        }
        else
        {
            int a = pop();
            int b = pop();
            switch (exp[i])
            {
            case '+':
                push(b + a);
                break;
            case '-':
                push(b - a);
                break;
            case '*':
                push(b * a);
                break;
            case '/':
                if (a != 0)
                {
                    push(b / a);
                }
                else
                {
                    printf("Division by 0 Error ...! \n");
                }
                break;
            default:
                printf("Invalid operator / operand ... !");
            }
        }
        i--;
    }
    return pop();
}

void printStack()
{
    if (top == NULL)
    {
        printf("NULL \n");
        return;
    }
    struct Node *currNode = top;
    while (currNode != NULL)
    {
        printf("%d \n", currNode->data);
        currNode = currNode->next;
    }
}

int main()
{
    char exp [] = "/*7+242";
    printf("Result : %d \n",preFix(exp));
    // push(5);
    // push(4);
    // push(3);
    // push(2);
    // push(1);
    // printStack();
    // printf("pop ==> %d \n", pop());
    return 0;
}
