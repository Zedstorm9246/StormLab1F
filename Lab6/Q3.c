/*3. Using the above program integrate the number
if it is a prime and print the Fibonacci series till that number.
Example
Input: 5 Output:
Number is prime
Series is = 0 1 1 2 3*/ 

#include<stdio.h>
int main()
{
    int num, count = 1, prime = 1, x = 0, temp =0, fib =1;
    printf("Enter a number: ");
    scanf(" %d", &num);
    while(count < num)
    {
        if(num % count == 0 && count != 1 && count != num)
        {
            prime = 0;
            break;
        }
        count++;
    }
    if(prime == 1)
    {
        printf("Prime\n");
        printf("Series = %d", x);
        while(fib < num)
        {
            printf(",%d", fib);
            temp = fib;
            fib += x;
            x = temp;
            
        }
    }
    else
    {
        printf("Not Prime");
    }
}


     
