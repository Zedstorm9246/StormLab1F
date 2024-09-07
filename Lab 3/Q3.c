Q3:


#include <stdio.h>
int main()
{
	float TaxR;
	float Salary;
	printf("Enter your Salary: ");
	scanf("%f", &TaxR );
	printf("Enter Tax rate: ");
	scanf("%d", &Salary);
	TaxR = TaxR/100;
	Salary = Salary - (Salary * TaxR);
	printf("Your Salary after tax deduction is: %0.2f", Salary);
} 	


wrong
