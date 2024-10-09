/*4. Write a program to check whether a number is an Armstrong number or not.
An Armstrong number is a number that is equal to the sum of cubes of its digits.*/

#include<stdio.h>
int main()
{
    int num, count = 0, sum = 0, temp;
    int dig;
    printf("Enter a number");
    scanf(" %d", &num);
    temp = num;
    while(temp > 0)
    {
        dig = temp % 10;
        temp = temp/10;
        sum += (dig*dig*dig);
    }
    if(sum == num)
    {
        printf("Number is an Armstrong");
    }
    else
    {
        printf("Number is not an Armstrong");
    }
}


             
