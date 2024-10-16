#include<stdio.h>
int main()
{
    int AccNum, item;
    float B_Balance, New_Balance, charge, T_charges = 0, Credit_Limit, Exc_credit_Limit, T_credits;

    printf("Enter your Account Number: ");
    scanf(" %d", &AccNum);
    printf("Enter your beginning balance for the month: ");
    scanf(" %f", &B_Balance);
    printf("Enter the number of items purchased this month: ");
    scanf(" %d", &item);
    for(int i = 1; i <= item; i++)
    {
        printf("Enter the charge for item %d: ", i);
        scanf(" %f", &charge);
        T_charges += charge;
    }
    printf("Enter the total credits applied to your account this month: ");
    scanf(" %f", &T_credits);
    printf("Enter your allowed credit limit: ");
    scanf(" %f", &Credit_Limit); 
    New_Balance = (B_Balance + T_charges) - T_credits;
    
    printf("Account Number: %d\n", AccNum);
    printf("Credit Limit: %.2f\n", Credit_Limit);
    printf("New Balance: %.2f\n", New_Balance);
    if(New_Balance > Credit_Limit)
    {
        Exc_credit_Limit = New_Balance - Credit_Limit;
        printf("Credit limit exceeded by %.2f\n", Exc_credit_Limit);
    }
    else
    {
        //Limit does not exceed
        Exc_credit_Limit = Credit_Limit - New_Balance;
        printf("Credit limit is not exceeded, %.2f credit left\n", Exc_credit_Limit);
    }
    
}
