/*Task8:
Consider yourself in a situation where you must categorize a student at Fast-NUCES Karachi campus. He has only provided you with the following details.
Roll number (He wasn’t kind so that’s all we have to work with).
Your job is to figure out what year is his registration. Which semester he/she is currently enrolled in and which section he/she is a part of. Note: You can use the char roll_number[7] data type to store data which I have explained in Lab. Use Ternary operators to accomplish this.
Hint: Getting the registration of the student is easy, trouble is the semester and section. To find out which semester he/she is enrolled in we can use a simple method of subtracting his registration number from the current year (i.e. 24-22 (from 22k-6412) ) this gives us 2 meaning he has passed 2 years here at fast and it’s the fall semester so 5th would be his semester no.


Now for class, the first digital indicates which section is allocated to the student i.e. 6412 meaning he has the sixth section allocated and comparing the sixth alphabet that would be F.


*/

#include<stdio.h>
int main()
{
    char Roll_no[7], Section;
    int yearR, semester, SectionNum;
    printf("Enter a your Roll number like '24k-1010': ");
    scanf(" %8s", &Roll_no);
    yearR = (Roll_no[0] - '0') * 10 + (Roll_no[1]-'0');
    semester = 1 + ((24-yearR)*2);
    SectionNum = Roll_no[5] - '0';
    Section = SectionNum + 'A'-1;
    printf("Year of Registration: %d", yearR);
    printf("\n %c", Section);
    semester == 1? printf("\n1st semester"):
    semester == 2? printf("\n2nd semester"):
    semester == 3? printf("\n3rd semester"):
    semester > 4? printf("\n%dth semester", semester):
    printf("Error");
}

