/**/
#include<stdio.h>
int main()
{
	int  Fg , c , Cf;
	float Pc;
	printf("enter number of calories ");
	scanf("%d", &c);
	printf("Enter number of Fat gram ");
	scanf("%d", &Fg );
	if (c < 0 || Fg < 0)
	{
		printf("Invalid input");
		return 0 ;
	}
	Cf = Fg * 9;
	Pc = Cf / c;
	if(Cf > c)
	{
		printf("either the calories or the fat grams were incorrectly entered");
		return 0 ; 
	}
	printf("Percentage of calories : %f " , Pc);

}
