/*Task4:
Write a nested if statement for the decision diagrammed in the accompanying flowchart.
 Use a multiple-alternative if statements for intermediate decisions where possible.
*/

#include<stdio.h>
int main()
{
    int PH;
    printf("Enter the PH: ");
    scanf("%d", &PH);
    if(PH > 14 || PH < 0)
    {
        printf("PH out of bound");
        return 0;
    }
    
    if(PH > 7)
    {
        PH < 12 ? printf("Alkaline"): printf("Very Alkaline");
    }
    else 
    {
        PH == 7 ? printf("Neutral"): PH > 2 ? printf("Acidic"): printf("Very Acidic"); ;
    }
}
