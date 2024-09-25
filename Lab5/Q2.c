/*Task2:
The weekday is true if it is a weekday, and the vacation is true if we are on vacation.
We sleep in if it is not a weekday or we're on vacation. Print true if we sleep in.

sleepIn(false, false) → true
sleepIn(true, false) → false
sleepIn(false, true) → true
*/

#include<stdio.h>
int main()
{
	char weekday, vacation, sleepin;
    
    printf("Enter 'T' if it is weekday else 'F' if not a weekday: ") ;
    scanf(" %c", &weekday);
    printf("Enter 'T' if you are on vactaion else 'F' if not on vacation: ");
    scanf(" %c", &vacation);

    if(weekday == 'F' || vacation == 'T')
    {
        sleepin = 'T';
        printf("Sleepin is True");
    }
    else
    {
        sleepin = 'F';
        printf("Sleepin is False");
    }

}
