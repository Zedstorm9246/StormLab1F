/*Given a positive integer denoting n, do the following:
a. If 1 >= n <= 9, print lowercase English words corresponding to the
numbers e.g. (one for 1, two for 2)
b. If != 9 print greater then 9*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n >= 1 && n <= 9) 
    {
        switch (n) 
        {
            case 1:
                printf("One\n");
                break;
            case 2:
                printf("Two\n");
                break;
            case 3:
                printf("Three\n");
                break;
            case 4:
                printf("Four\n");
                break;
            case 5:
                printf("Five\n");
                break;
            case 6:
                printf("Six\n");
                break;
            case 7:
                printf("Seven\n");
                break;
            case 8:
                printf("Eight\n");
                break;
            case 9:
                printf("Nine\n");
                break;
            default:
                break;
            }
    }
    else if (n > 9) 
    {
        printf("greater than 9\n");
    }
    else 
    {
        printf("The number is not positive.\n");
    }
    return 0;
}
