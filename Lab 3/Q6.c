/*Q6: Construct a C program where you calculate the slope of two point (5,4), (3,2). Use format specifiers to
cap the result to 3 decimal places.*/

#include <stdio.h>
int main()
{
  int y1, y2, x1, x2;
  float slope;
  printf("Enter first point\n");
  scanf("%d %d", &x1, &x2);
  printf("Enter second point\n");
  scanf("%d %d", &y1, &y2);
  slope = (y2-y1)/(x2-x1);
  printf("The slope is %.3f", slope);
} 
