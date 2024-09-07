/*Q2:Write a C program that takes two integer values as input from the user. Then swap the values taken
from the user and display the output of the variables.*/

#include <stdio.h>
int main()
{
	int x=0  ,y=0 ,temp = 0;
	printf("Enter two Numbers ");
	scanf("%d %d", &x, &y);
	temp = x;
	x = y;
	y = temp;
	printf("%d, %d", x, y);
}

