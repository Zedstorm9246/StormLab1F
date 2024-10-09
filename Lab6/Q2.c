/*2. Write a program to check whether a given number is prime or not.*/ 

#include<stdio.h>
int main()
{
    int num, count = 1, prime = 1;
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
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}
