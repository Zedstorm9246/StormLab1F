/*Create a calculator asking for operator (+ or – or * or /) and operands and
performs calculation according to the user input using switch statement.*/

#include <stdio.h>
int main()
{
    int num1, num2;
    float cal;
    char op;
    printf("Enter operator(+,-,*,/) : ");
    scanf("%c", &op);
    printf("Enter 1st operand: ");
    scanf("%d", &num1);
    printf("Enter Two operands: ");
    scanf("%d", &num2);
    switch (op)
    {
    case '+' :
        cal = num1 + num2;
        printf("%.1f", cal);
        break;
    case '-' :
        cal = num1 - num2;
        printf("%.1f", cal);
        break;
    case '*' :
        cal = num1 * num2;
        printf("%.1f", cal);
        break;
    case '/' :
        cal = num1 / num2;
        printf("%.1f", cal);
        break;
    default:
        printf("invalid operator");
        break;
    }

}    
