#include <stdio.h>
// /* Question 1 --> Find the largest of three */
int largestOfThree(int,int,int);
int main(){
    int a,b,c;
    a = 8;
    b = 20;
    c = 100;
    int d = largestOfThree(a,b,c);
    printf("%d \n",d);
    return 0;
}


// /* Question 1 --> Find the largest of three */
int largestOfThree(int a,int b,int c)  {
    if(a > b){
        if(a > c){
            return a;
        }
        else{
            return c;
        }
    }else{
        if(b > c){
            return b;
        }else{
            return c;
        }
    }
    return 0;
}