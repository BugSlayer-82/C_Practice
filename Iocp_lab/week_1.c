#include<stdio.h>
#include<math.h>

// /* Question 2 --> Count the total digit in factorial of a number problem */


// /* Question 1 --> Count the total digit of number (Optimised approach) */ 
int countOfDigit(int num){
    if(num == 0){
        return 1;
    }
    return (int)log10(num) + 1;
}
int main()
{
    // /* Question --> 1 */
    int num;  // To declare a varible that store number
    printf("Enter your number : "); 
    scanf("%d",&num); // Take input from user
    printf("Count : %d \n",countOfDigit(num)); // Print and call the count Digit function 

    // * Question --> 2 */
    int num;

    return 0;
}