#include <stdio.h>
#include <math.h>

int main()
{
    // // ====> 1 To calculate the percentage of five subject marks
    // float p, c, m, h, e, sum, percent;
    // printf("Enter your marks of Physics = ");
    // scanf("%f", &p);
    // printf("Enter your marks of Chemistry = ");
    // scanf("%f", &c);
    // printf("Enter your marks of Maths = ");
    // scanf("%f", &m);
    // printf("Enter your marks of Hindi = ");
    // scanf("%f", &h);
    // printf("Enter your marks of English = ");
    // scanf("%f", &e);
    // sum = p + c + m + h + e;
    // percent = (sum / 500) * 100;
    // printf("Total sum is = %0.2f\n", sum);
    // printf("Total percentage is = %0.2f\n", percent);

    // // ====> 2 To calculate the simple and compound interest
    // float p, r, t, si, ci, amount;
    // printf("Enter your principal amount = ");
    // scanf("%f", &p);
    // printf("Enter your rate of interest = ");
    // scanf("%f", &r);
    // printf("Enter your time = ");
    // scanf("%f", &t);
    // si = (p * r * t) / 100;
    // amount = p * pow((1 + r / 100), t);
    // ci = amount - p;
    // printf("Simple interest = %0.2f\n", si);
    // printf("Amount = %0.2f\n", si + p);
    // printf("Compound interst = %0.2f\n", ci);

    // // ====> 3 To calculate the area and circumference of circle
    // float r, a, c;
    // printf("Enter your radius = ");
    // scanf("%f", &r);
    // a = 3.14 * r * r;
    // c = 2 * 3.14 * r;
    // printf("Area = %f \n", a);
    // printf("Circum = %f \n", c);

    // // ====> 4 To convert the temperature from celsius to fahrenheit by using c/5 = (f-32)/9
    // float c, f;
    // printf("Enter your temperature in celsius ==> ");
    // scanf("%f", &c);
    // f = (9 * c) / 5 + 32;
    // printf("Fahrenheit ==> %0.2f\n", f);

    // // ====> 5 To swap the two value with third variable
    // int a, b, temp;
    // printf("Enter the value of a & b ?\n");
    // scanf("%d %d", &a, &b);
    // printf("Before swapping a => %d & b => %d \n", a, b);
    // temp = a;
    // a = b;
    // b = temp;
    // printf("After swapping a => %d & b => %d \n", a, b);

    // // ====> 6 To check the entered number a and b are equal or not
    // int a, b;
    // printf("Enter your number a => ");
    // scanf("%d", &a);
    // printf("Enter your number b => ");
    // scanf("%d", &b);
    // if (a == b)
    // {
    //     printf(" a and b are equal. \n");
    //     printf("a = %d and b = %d\n", a, b);
    // }
    // else
    // {
    //     printf("a and b are not equal.!\n");
    //     printf("a = %d and b = %d\n", a, b);
    // }

    // // ====> 7 To find the greatest of three number x,y,z
    // int x, y, z;
    // printf("Enter your number x,y,z ?\n");
    // scanf("%d %d %d", &x, &y, &z);
    // printf("Entered value of x = %d, y = %d, z = %d \n", x, y, z);
    // if (x > y)
    // {
    //     if (x > z)
    //     {
    //         printf("X = %d  is greater\n", x);
    //     }
    //     else
    //     {
    //         printf("Z = %d is greater\n", z);
    //     }
    // }
    // else
    // {
    //     if (y > z)
    //     {
    //         printf("Y = %d is greater\n", y);
    //     }
    //     else
    //     {
    //         printf("Z = %d is greater\n", z);
    //     }
    // }

    // // ====> 8 To check number is even or odd
    // int num;
    // printf("Enter your number => ");
    // scanf("%d", &num);
    // if (num % 2 == 0)
    // {
    //     printf("Number is even = %d \n", num);
    // }
    // else
    // {
    //     printf("Number is odd = %d \n", num);
    // }

    // // ====> 9 To check the given year is leap year or not a leap year
    // int year;
    // printf("Enter your year = ");
    // scanf("%d", &year);
    // if (year % 400 == 0 || (year % 4 == 0) && (year % 100 != 0))
    // {
    //     printf("This is a leap year = %d\n", year);
    // }
    // else
    // {
    //     printf("This is not a leap year = %d\n", year);
    // }

    // // ====> 10 To find the percentage and print and also print the grades based on marks
    // float m1, m2, m3, m4, m5, percent, sum;
    // printf("Enter the marks of 5 subject ? \n");
    // scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    // sum = (m1 + m2 + m3 + m4 + m5);
    // printf("sum = %0.2f \n", sum);
    // percent = (sum / 500) * 100;
    // printf("percentage = %0.2f\n", percent);
    // if (percent > 90 && percent <= 100)
    // {
    //     printf("Grade => A \n");
    // }
    // else if (percent > 80 && percent <= 90)
    // {
    //     printf("Grade => B \n");
    // }
    // else if (percent > 60 && percent <= 80)
    // {
    //     printf("Grade => C \n");
    // }
    // else
    // {
    //     printf("Grade => D \n");
    // }

    // // ====> 11 To calculate the result of two number by using switch
    // int x, y;
    // char ch;
    // printf("Enter your number x and y ?\n");
    // scanf("%d %d", &x, &y);
    // printf("x = %d ,y = %d \n", x, y);
    // printf("Enter your operator ==> +,-,*,/,%%\n");
    // scanf(" %c", &ch);
    // switch (ch)
    // {
    // case '+':
    //     printf("Sum = %d\n", (x + y));
    //     break;
    // case '-':
    //     printf("Difference = %d\n", (x - y));
    //     break;
    // case '*':
    //     printf("Product = %d\n", (x * y));
    //     break;
    // case '/':
    //     printf("Divide = %d\n", (x / y));
    //     break;
    // case '%':
    //     printf("Remainder = %d\n", (x % y));
    //     break;
    // default:
    //     printf("Invalid operator !\n");
    // }

    // // ====> 12 To print the sum till then n
    // int num, sum;
    // printf("Enter your number = ");
    // scanf("%d", &num);
    // sum = 0;
    // for (int i = 1; i <= num; i++)
    // {
    //     sum += i;
    // }
    // printf("Sum = %d\n", sum);

    // // ====> 13 To print the factorial of number n
    // int num;
    // long int factorial;
    // printf("Enter your number = ");
    // scanf("%d", &num);
    // factorial = 1;
    // if (num == 0)
    // {
    //     printf("Factorial = 1 \n");
    // }
    // else
    // {
    //     for (int i = 1; i <= num; i++)
    //     {
    //         factorial = factorial * i;
    //     }
    //     printf("Factorial = %ld\n", factorial);
    // }

    // // ====> 14 To print the sum of even and odd number till n
    // int num, even, odd;
    // printf("Enter your number = ");
    // scanf("%d", &num);
    // even = 0;
    // odd = 0;
    // for (int i = 1; i <= num; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         even += i;
    //     }
    //     else
    //     {
    //         odd += i;
    //     }
    // }
    // printf("Sum of even = %d\n", even);
    // printf("Sum of odd  = %d\n", odd);

    // // ====> 15 To print the fibbonacci series
    // int num, first, second, third;
    // printf("Enter your number = ");
    // scanf("%d", &num);
    // first = 0;
    // second = 1;
    // if (num <= 0)
    // {
    //     printf("Wrong input ! \n");
    // }
    // else if (num == 1)
    // {
    //     printf("0 \n");
    // }
    // else
    // {
    //     printf("0 1 ");
    //     for (int i = 2; i < num; i++)
    //     {
    //         third = first + second;
    //         first = second;
    //         second = third;
    //         printf("%d ", third);
    //     }
    //     printf("\n");
    // }

    // // ====> 16 To check number is prime of not
    // int n,i,isPrime;
    // printf("Enter your number = ");
    // scanf("%d", &n);
    // isPrime = 1;
    // 	if(n == 1){
    // 	printf("%d : is nor a prime neither composite ..!\n",n);
    // }else if(n <= 1){
    // 	printf("%d : is not a prime number ...! \n",n);
    // }else{
    // 		for (int i = 2; i <= n / 2; i++){
    //     		if (n % i == 0){
    // 			isPrime = 0;
    //         			break;
    // 		}
    // 	}
    // 	if(isPrime){
    // 		printf("%d : is a prime number ...! \n",n);
    // 	}else{
    // 		printf("%d : is not a prime number ..! \n",n);
    // 	}
    // }

    // // ====> 17 To print the sum of digit
    // int n, i, sum;
    // printf("Enter your number = ");
    // scanf("%d", &n);
    // sum = 0;
    // while (n > 0)
    // {
    //     int currDigit = n % 10;
    //     sum += currDigit;
    //     n /= 10;
    // }
    // printf("Sum = %d \n", sum);

    // // ====> 18 To print the reverse of number
    // int n, reverse = 0;
    // printf("Enter your number = ");
    // scanf("%d", &n);
    // while (n > 0)
    // {
    //     int currDigit = n % 10;
    //     reverse = reverse * 10 + currDigit;
    //     n /= 10;
    // }
    // printf("Reverse = %d \n", reverse);

    // // ====> 19-a To check the number is Armstrong number
    // int n, x, count = 0, arm = 0;
    // printf("Enter your number : ");
    // scanf("%d", &n);
    // x = n;
    // while (x > 0)
    // {
    //     count++;
    //     x /= 10;
    // }
    // int original = n;
    // while (n > 0)
    // {
    //     int currDig = n % 10;
    //     arm += (int)pow(currDig, count);
    //     n /= 10;
    // }
    // printf("Digit Count = %d \n", count);
    // if (original == arm)
    // {
    //     printf("%d : is an Armstrong number \n", original);
    // }
    // else
    // {
    //     printf("%d : is Not an Armstrong number \n", original);
    // }

    // // ====> 19-b To print the Armstrong number till n
    // int n;
    // printf("Enter the limit ==> ");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     int x = i;
    //     int arm = 0;
    //     int count = 0;
    //     while (x != 0)
    //     {
    //         count++;
    //         x /= 10;
    //     }
    //     int temp = i;
    //     while (temp != 0)
    //     {
    //         int currDig = temp % 10;
    //         arm = arm + (int)pow(currDig, count);
    //         temp /= 10;
    //     }
    //     if (arm == i)
    //     {
    //         printf("Armstrong is : %d \n", i);
    //     }
    // }

    // // ====> 20 To Binary number to decimal and vice versa
    // int n;
    // char ch;
    // printf("For Binary to Decimal press ==> D or d\n");
    // printf("For Decimal to Binary press ==> B or b\n");
    // scanf(" %c", &ch);
    // if (ch == 'D' || ch == 'd')
    // {
    //     int i = 0, dec = 0;
    //     printf("Enter Binary number : ");
    //     scanf(" %d", &n);
    //     int temp = n;
    //     while (temp > 0)
    //     {
    //         int currDig = temp % 10;
    //         dec += currDig * pow(2, i);
    //         i++;
    //         temp /= 10;
    //     }
    //     printf("Decimal of ==> %d is ==> %d\n", n, dec);
    // }
    // else if (ch == 'B' || ch == 'b')
    // {
    //     int bin = 0, place = 1;
    //     printf("Enter Decimal number : ");
    //     scanf(" %d", &n);
    //     int temp = n;
    //     while (temp > 0)
    //     {
    //         int r = temp % 2;
    //         bin += r * place;
    //         temp /= 2;
    //         place *= 10;
    //     }
    //     printf("Binary of ==> %d  is ==> %d\n", n, bin);
    // }
    // else
    // {
    //     printf("Invalid input !\n");
    // }

    // // ====> 21 Find the sum of the element of array
    // int n, sum = 0;
    // printf("Enter the number of elements => ");
    // scanf("%d", &n);
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter element %d => ", i + 1);
    //     scanf("%d", &arr[i]);
    // }
    // for (int j = 0; j < n; j++)
    // {
    //     sum += arr[j];
    // }
    // printf("Sum is => %d \n", sum);

    // // ====> 22 To find the sum of two array and save into third one
    // int n;
    // printf("Enter size of array ? \n");
    // scanf("%d", &n);
    // int a[n], b[n], c[n];
    // printf("Enter the elements of A ?\n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("enter element od : %d : ", i + 1);
    //     scanf("%d", &a[i]);
    // }
    // printf("Enter the elements of B ?\n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("enter element of : %d : ", i + 1);
    //     scanf("%d", &b[i]);
    // }
    // printf("Output the matrix C \n");
    // for (int i = 0; i < n; i++)
    // {
    //     c[i] = a[i] + b[i];
    //     printf("%d ", c[i]);
    // }
    // printf("\n");

    // ====> 23 To find the minimum and maximum element of the array.
    // int n, min, max;
    // printf("Enter size of Array ?\n");
    // scanf("%d", &n);
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     printf("enter element : %d : ", i + 1);
    //     scanf("%d", &arr[i]);
    // }
    // min = arr[0];
    // max = arr[0];
    // for (int i = 1; i < n; i++)
    // {
    //     if (min > arr[i])
    //     {
    //         min = arr[i];
    //     }
    // }
    // for (int i = 1; i < n; i++)
    // {
    //     if (max < arr[i])
    //     {
    //         max = arr[i];
    //     }
    // }
    // printf("Minimum element is : %d \n", min);
    // printf("Maximum element is : %d \n", max);

    // // ====> 24 To search an element in a array using Linear Search.
    // int n, x;
    // printf("Enter size of array ?\n");
    // scanf("%d", &n);
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter element : %d : ", i + 1);
    //     scanf("%d", &arr[i]);
    // }
    // printf("Enter number which do you want ?\n");
    // scanf("%d", &x);
    // for (int i = 0; i < n; i++)
    // {
    //     if (x == arr[i])
    //     {
    //         printf("Number is => %d , at index => %d \n", arr[i], i + 1);
    //         break;
    //     }
    //     else
    //     {
    //         printf("Element is not available : %d \n", x);
    //         return -1;
    //     }
    // }

    return 0;
}
