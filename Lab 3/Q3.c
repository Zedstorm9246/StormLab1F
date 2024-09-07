/*Q3: A customer asks the IT firm to develop a program in C language, which can take tax rate and salary from
the user on runtime and then calculate the tax, the user has to pay and the salary he/she will have after
paying the tax. This information is then provided to the user.*/

#include <stdio.h>
int main()
{
	float TaxR;
	float Salary;
	printf("Enter your Salary: ");
	scanf("%f", &Salary );
	printf("Enter Tax rate: ");
	scanf("%f", &TaxR);
	TaxR = TaxR/100;
	Salary = Salary *(1-TaxR);
	printf("Your Salary after tax deduction is: %0.2f", Salary);
} 



