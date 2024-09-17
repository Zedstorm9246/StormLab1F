/*An online shopping store is providing discounts on the items due to the Eid. If
the cost of items is less than 2000 it will give a discount up to 5%. If the cost of
shopping is 2000 to 4000, a 10% discount will be applied. If the cost of
shopping is 4000 to 6000, a 20% discount will be applied. If it's more than 6000
then a 35% discount will be applied to the cost of shopping. Print the actual
amount, saved amount and the amount after discount. The Minimum amount
eligible for a discount is 500.*/

#include<stdio.h>
int main ()
{
float cost,d,dAmount,fAmount;
printf("Enter cost");
scanf("%f",&cost);
d = 0;
if (cost>=500)
{
    if(cost<2000)
    {
        d=0,05;
    }
    else if (cost>=2000 && cost <=4000)
    {
    	d=0.10;
    }
    else if (cost>4000 && cost <= 6000)
    {
    	d=0.20;
    }
    else if(cost>6000)
    {
    	d=0.35;
    }
    dAmount=cost*d;
    fAmount=cost-dAmount;
  }

  printf("Actual amount: %.2f\n", cost);
  printf("Amount saved: %.2f\n", dAmount);
  printf("Your Total after discount is : %.2f\n", fAmount);
  return 0;
}
