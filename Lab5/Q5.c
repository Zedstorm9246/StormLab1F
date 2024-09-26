/*Task5:
Implement the following decision table using nested ternary operators.
Assume that the grade point average is within the range 0.0 through 4.0.*/


#include<stdio.h>
int main()
{
    float GPA;
    printf("Enter GPA: ");
    scanf(" %f", &GPA);
    GPA < 0? printf("Invalid GPA"):
    GPA < 1? printf("Failed semster-registration suspended"):
    GPA < 2? printf("On probation for next semester"):
    GPA < 3? printf(" "):
    GPA < 3.5? printf("Dean's list for semester"):
    GPA <= 4? printf("Highest honors for semester"):
    printf("Invalid GPA");
}
