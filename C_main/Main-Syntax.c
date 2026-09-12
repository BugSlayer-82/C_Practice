// =====> Basic Syntax in C
#include <stdio.h>

// int main()
// {
//     printf("I am popoye\n");
//     printf("Who are you ?\n");
//     return 0;
//
//     }

/* Structure in C */
// // Method 1 with variable
// struct emp{
//     char name[35];
//     int age ;
//     float salary;
//     char city[30];
// }data;

// // Method 2 without variable
//  struct emp{
//     char name[35];
//     int age ;
//     float salary;
//     char city[30];
// };
// struct emp data;

// // Method 3 with typedef keyword
// typedef struct {
//     char name[35];
//     int age ;
//     float salary;
//     char city[30];
// }emp;
// emp e1;

int main()
{
    /* Variable in C */
    // int x = 50;
    // char ch = 'a';
    // char str[] = "hello";
    // float y = 504.68;
    // double z = 5045.2554;
    // short int c = 55890;
    // long int d = 50903457;
    // unsigned int e = 50;
    // unsigned short int f = 50;
    // unsigned long int g = 50;
    // static int a = 43;
    // extern int b = 34;

    /* Pointers in C */
    // int n = 34;
    // int *ptr = &n;
    // printf("%u \n", *ptr); // *ptr --> Value at that address
    // printf("%u \n", ptr); // ptr --> Address of that value

    /* Decision control statement */
    // // ====> Conditional statement
    // if(condition-a){
    //     /* Write your code here*/
    // }else if(condition-b){
    //     /* Write your code here*/
    // }else{
    //     /* Write your code here*/
    // }

    /* Ternary operator or conditional operator */
    //  (condition)? statement - a : statement - b;

    // // ====> Switch case statement
    // int a;
    // switch(a){
    //     case 1:
    //     /*Write your code here*/
    //     break;
    //     case 2:
    //     /*Write your code here*/
    //     break;
    //     default:
    // }

    /* Sequence control statement*/
    //     goto label;
    // label:
    //     printf("This is goto statement \n");

    /* Loop control instruction or statement */
    // // ====> While loop control statement
    // while(condition){
    //     /* Write your code here*/
    // }
    // // ====> do While loop control statement
    // do{
    //     /* Write your code here*/
    // }while(condition);
    // // ====> for loop control statement
    // for(intialize; condition; increament|| decreament){
    //     /* Write your code here*/
    // }

    /* Array single dimension and multi-dimension*/
    // // ====> Single dimension
    // int n; // size of array;
    // int arr[n];
    // int arr[] = {2,5,5,6,5};

    // // ====> MultiDimension
    // int n,m; // n = number of rows , m = number of columns
    // int arr[n][m];
    // int arr[2][2] = {{3,5},{3,6}};

    return 0;
}
