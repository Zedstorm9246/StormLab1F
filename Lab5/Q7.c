/*Task7:
Using Ternary operators write a C-Program that can identify if the last digit of the number is zero or non-zero.
If its zero, the program should print “Last Digit is zero” if it’s non-zero the program should print “Last Digit non-zero”
Example:
Input 5; Output: Last Digit Non-Zero
Input 20; Output: Last Digit Zero
*/

#include<stdio.h>
int main()
{
    int num, LastD;
    printf("Enter a number: ");
    scanf(" %d", &num);
    LastD = num % 10;
    if(LastD == 0)
    {
        printf("Last Digit Zero");
    }
    else
    {
        printf("Last Digit Non-Zero");
    }
}

             
