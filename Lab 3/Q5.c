/*Q5: Construct a C program with the flowchart below. The input value of the principle must be between 100
Rs. To 1,000,000 Rs. The Rate of interest must be between 5% to 10% and Time Period must be between
1 to 10 years. Hint: these restrictions can be displayed in the form of message on the window.*/

#include <stdio.h>
int main()
{
  float p, r, t;
  float Sint;
  printf("Enter value of the principle\n");
  scanf("%f", &p);
  if (p < 100 || p > 1000000)
  {
  	printf("Principle must be between 100Rs. To 1,000,000 Rs.");
  	return 0;
  }
  printf("Enter value of Rate of interest\n");
  scanf("%f", &r);
  if (r < 5 || r > 10)
  {
  	printf("Rate of interest must be between 5% to 10%");
  	return 0;
  }
  printf("Enter value of Time Period\n");
  scanf("%f", &t);
  if (t < 1 || t > 10)
  {
  	printf("Time Period must be between 1 to 10 years");
  	return 0;
  }
  Sint = (p*r*t)/100;
  printf("Simple Interest is %.1f", Sint);
  return 0;
} 
