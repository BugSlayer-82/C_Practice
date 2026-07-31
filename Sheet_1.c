#include <stdio.h>

// /* Question 8 --> To search for element in array using linear search */
int linearSearch(int x,int arr[]){
    int lenthArr = sizeof(arr)/sizeof(arr[0]); // gain the size of array
    for(int i = 0; i < lenthArr; i++){
        if(arr[i] == x){ // Search for element x in array 
            return arr[i]; // return the element
        }
    }
    return -1; // element not found
}

// /* Question 7 --> To an array using Bubble Sort */
// void bubbleSort(int n,int arr[]){
//     for(int i = 0; i < n - 1; i++){
//         for(int j = i; j < n - 1; j++){
//             if(arr[j] > arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }   
//     for(int i = 0; i < n; i ++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }

// /* Question 6 --> To print the Fibonacci Series */
// void printFibonacci(int n){
//     int first = 0;
//     int second = 1;
//     for(int i = 0 ; i < n; i++){
//         printf("%d ",first);
//         int third = first + second;
//         first = second;
//         second = third;
//     }
// }

// /* Question 5(a) --> To find the factorial of a number n (Through Iterative) */
//  long int factorial(int n){
//     long int fact = 1;
//     if(n == 0 || n == 1){
//         return fact;
//     }
//     for(int i = 1; i <= n; i ++){
//         fact = fact * i;
//     }
//     return fact;
//  }

// /* Question 5(b) --> To find the factorial of a number n (Through Recursive) */
// long int factorial(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }

// /* Question 4 --> To check a number is palindrome or not */
// int isPalindrome(int n)
// {
//     int temp = n;
//     int reverse = 0;
//     while (temp != 0)
//     {
//         int curr = temp % 10;
//         temp /= 10;
//         reverse = reverse * 10 + curr;
//     }
//     if (reverse == n)
//     {
//         return 1;
//     }
//     return 0;
// }

// /* Question 3 --> To reverse a number */
// int reverse(int num)
// {
//     if(num < 10){
//         return num;
//     }
//     int reverse = 0;
//     while(num != 0){
//         int curr = num % 10;
//         num /= 10;
//         reverse = reverse*10+curr;
//     }
//     return reverse;
// }

// /* Question 2 --> To check whether a number is prime or not */
// int isPrime(int n)
// {
//     if (n <= 1)
//     {
//         return 0;
//     }
//     else
//     {
//         for (int i = 2; i <= n / 2; i++)
//         {
//             if (n % i == 0)
//             {
//                 return 0;
//             }
//         }
//         return 1;
//     }
// }

// /* Question 1 --> Find the largest of three */
// int largestOfThree(int a, int b, int c)
// {
//     if(a > b){
//         if(a > c){
//             return a;
//         }
//     }else{
//         if(b > c){
//             return b;
//         }
//     }
//     return c;
// }

int main()
{
    // /* Question 1 --> Find the largest of three */
    // int a,b,c,largest;
    // printf("Enter your number a : ");
    // scanf(" %d", &a);
    // printf("Enter your number b: ");
    // scanf("%d", &b);
    // printf("Enter your number c :");
    // scanf("%d", &c);
    // largest = largestOfThree(a,b,c);
    // printf("Largest of three is : %d \n",largest);

    // /* Question 2 --> To check whether a number is prime or not */
    // int n, result;
    // printf("Enter your number : ");
    // scanf("%d",&n);
    // result = isPrime(n);
    // if(result == 0){
    //     printf("%d : is not a prime number .\n", n);
    // }else{
    //     printf("%d : is a prime number .\n", n);
    // }

    // /* Question 3 --> To reverse a number */
    // int n,result;
    // printf("Enter your number : ");
    // scanf("%d",&n);
    // result = reverse(n);
    // printf("Reversed number : %d\n",result);

    // /* Question 4 --> To check a number is palindrome or not */
    // int n;
    // printf("Enter your number : ");
    // scanf("%d",&n);
    // if(isPalindrome(n)){
    //     printf("%d : is Palindrome number .\n",n);
    // }else{
    //     printf("%d : is not Palindrome number . \n",n);
    // }

    // /* Question 5(a) --> To find the factorial of a number n (Through iterative) */
    // int n;
    // printf("Enter your number : ");
    // scanf("%d",&n);
    // printf("%ld : is a factorial of : %d\n",result,n);

    // /* Question 5(b) --> To find the factorial of a number n (Through Recursive) */
    // int n;
    // printf("Enter your number : ");
    // scanf("%d", &n);
    // printf("%ld : is a factorial of : %d \n", factorial(n), n);

    // /* Question 6 --> To print the Fibonacci Series */
    // int n; 
    // printf("Enter your number of term : "); 
    // scanf("%d",&n);
    // printFibonacci(n);    
    // printf("\n");

    // /* Question 7 --> To an array using Bubble Sort */
    // int n;
    // printf("Enter size of array :");
    // scanf("%d",&n);
    // int arr[n];
    // for(int i = 0; i < n; i++){
    //     printf("Enter array element : ");
    //     scanf("%d",&arr[i]);
    // }
    // bubbleSort(n,arr);
    
    // /* Question 8 --> To search for element in array using linear search */
    int arr[] = {3,2,6,1,9,8,0,7};
    int x;
    printf("Enter your element do you want ? \n");
    scanf("%d",&x);
    if(linearSearch(x,arr) != -1){
        printf("Element is found : %d \n",x);
    }else{
        printf("Element is not found : %d \n",x);
    }
    return 0;
}
