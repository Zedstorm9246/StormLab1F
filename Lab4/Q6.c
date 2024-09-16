/*An online shopping store is providing discounts on the items due to the Eid. If
the cost of items is less than 2000 it will give a discount up to 5%. If the cost of
shopping is 2000 to 4000, a 10% discount will be applied. If the cost of
shopping is 4000 to 6000, a 20% discount will be applied. If it&#39;s more than 6000
then a 35% discount will be applied to the cost of shopping. Print the actual
amount, saved amount and the amount after discount. The Minimum amount
eligible for a discount is 500.*/

#include<stdio.h>
int main (){
float cost,discount,discountAmount,finalAmount;
printf("Enter cost");
scanf("%1f",&cost);
discount=0;
if 
 (cost>=500){
  if(cost<2000){
  discount=0,05;}
    else if (cost>=2000 && cost <=4000){
    	discount=0.10;}
    	  else if (cost>4000 && cost <= 6000){
    	  	discount=0.20;}
    	  	  else if(cost>6000){
    	  	  	discount=0.35;}
  }
  discountAmount=cost*discount;
  finalAmount=cost-discountAmount;
  printf("Actual amount:%.2f\n", cost);
  printf("Saved amount:%.2f\n", discountAmount);
  printf("Actual amount:%.2f\n", finalAmount);
  return 0;
}
