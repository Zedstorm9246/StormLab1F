Q2:

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

