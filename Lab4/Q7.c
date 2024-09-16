/*Write a program in C to calculate and print the Electricity bill of a given
customer. The customer id., name and unit consumed by the user should be
taken from the keyboard and display the total amount to pay to the customer.
The charges are as follow:

        Unit                      Charge/Unit
Up to 199                          @16.20
200 and above but less than 300    @20.10
300 and above but less than 500    @27.10
500 and above @35.90
If the bill exceeds Rs. 18000 then a surcharge of 15% will be charged on top of the bill.

Test Input:
1001 //Customer ID
James //Customer Name
800 //Units Consumed

Expected Output:
Customer ID :1001
Customer Name: James
Units Consumed :800
Amount Charges @Rs. 35.90 per unit: 28720
Surcharge Amount: 4308
Net Amount Paid by the Customer: 33028.00*/

#include<stdio.h>
int main()
{
int customerID,units;
float totalbill;
char n;
printf("Enter customer ID\n");
scanf("%d" , &customerID);
printf("Enter customer name\n");
scanf("%s", &n);
printf("enter units consumed\n");
scanf("%d", &units);
 if
(units <= 199 && units>=0){
totalbill=16.20*units;}
  else if
(units>=200 && units<300){
totalbill=20.10*units;}
    else if
(units>=300 && units<500){
totalbill=27.10*units;}
      else
{totalbill=35.90*units;}
 if
(totalbill>18000){
totalbill=totalbill+totalbill*0.15;}
printf("\n Electric bill\n");
printf("customer name; %s\n", n);
printf("customer Id: %d\n", customerID);
printf("units consumed: %d\n" , units);
printf("total bill: %.2f\n" , totalbill);
return 0;
}


