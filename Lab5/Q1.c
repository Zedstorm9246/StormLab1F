/*Task1: Write a program that asks for the number of calories and fat grams in a food. 
 The program should display the percentage of calories that come from fat
One gram of fat has 9 calories, so Calories from fat = fat grams * 9
The percentage of calories from fat can be calculated as: calories from fat/total calories
Input validation: Make sure the number of calories and fat grams are not less than 0.
Also, the number of calories from fat cannot be greater than the total number of calories.
If that happens, display an error message indicating that either the calories or fat grams were incorrectly entered.
*/

#include<stdio.h>
int main()
{
	float  Fg , c , Cf;
	float Pc;
	printf("Enter number of calories ");
	scanf("%f", &c);
	printf("Enter number of Fat gram ");
	scanf("%f", &Fg );
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
	printf("Percentage of calories from Fat : %.2f " , Pc);

}

