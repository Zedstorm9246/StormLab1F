/*1. Which loop system would be better for user input. Justify your answer by creating a program that
takes a value and adds it to a variable and prints it repeatedly until the user enters a zero value.*/

#include<stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf(" %d", &num);
    while(num != 0)
    {
        sum += num;
        printf("sum : %d", sum );
        printf("\nEnter a number: ");
        scanf(" %d", &num);
    }
}


             
