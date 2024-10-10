#include<stdio.h>
int main()
{
	int arr[6] = {1,2,3,4,5,6};
	int size = 6, LastD;
	for(int i= 0; i < size ; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	LastD = arr[size-1];
	for(int x = size-1; x > 0; x--)
	{
		arr[x] = arr[x - 1];
	}
	arr[0] = LastD;
	for(int i= 0; i < size ; i++)
	{
		printf("%d", arr[i]);
	}
}
