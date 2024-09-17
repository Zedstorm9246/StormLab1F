/*Write a C program to input a character from the user and check whether the
given character is a small alphabet, capital alphabet, digit, or special character,
using if else.*/

#include<stdio.h>
int main()
{
char c;
printf("enter a character: ");
scanf("%c" , &c);
if (c >= 'a' && c <= 'z')
{
    printf("%c is a Lowercase alphabet.\n", c);
}
else if (c >= 'A' && c <= 'Z') 
{
    printf("%c letter is a capital alphabet.\n", c);
}
else if (c >= '0' && c <= '9')
{
    printf("%c is a digit.\n", c);
}
else 
{
    printf("%c is a special character.\n", c);
}
return 0;
}

