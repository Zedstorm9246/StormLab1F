/*Q4: A car travelled back and forth from point A to point B. With a distance being (single trip) 1207KM. During
the forward trip fuel price was 118/liter while returning it was 123/liter. Calculate the total fuel cost
(both ways) and the fuel consumed (total trip). Use the car’s fuel average as input from the user (Input
must be positive make some restrictions on only accepting positive input)*/

#include <stdio.h>
int main()
{
  int Trip = 1207;
  float Favg, Liter, FcostA, FcostB, Tcost;
  printf("Enter Fuel Average: ");
  scanf("%f", &Favg);
  if (Favg < 0)
  {
  	printf("Fuel Average is out of bound");
  	return 0;
  }
  Liter = Trip/Favg;
  FcostA = 118 * Liter;
  FcostB = 123 * Liter;
  Tcost = FcostA + FcostB;
  printf("The total Fuel cost of the trip is $%.2f\n",Tcost);
  Liter += 1;
  printf("The total fuel consumed is %.2f\n", Liter);
  return 0;
} 
