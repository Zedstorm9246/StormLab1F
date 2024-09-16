/*Write a C program to input a character from the user and check whether the
given character is a small alphabet, capital alphabet, digit, or special character,
using if else.*/

#include<stdio.h>
int main()
{
int c
printf("enter a character");
scanf{"%c" , &c);
 if (islower(C))
{printf("%c" is a smaller alphabet.\n");}
 else if (isupper(c)) 
{printf("%c" letter is a capital alphabet.\n");}
 else if (isdigit(C))
{printf("%c" is a digit.\n);}
 else 
{printf("%c" is a special character.\n");}
return 0;
}
