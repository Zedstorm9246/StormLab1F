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
    char roll_number[7];
    int registrationYear, currentYear = 24; 
    int yearsPassed, semester;
    int sectionDigit;
    char section;
    printf("Enter roll number (for eg: 24K-1021): ");
    scanf("%6s", roll_number);
    registrationYear = (roll_number[0] - '0') * 10 + (roll_number[1] - '0'); 
    yearsPassed = (currentYear - registrationYear);
    (yearsPassed < 5) ?
   	semester= (yearsPassed*2+1)
    : 'error';
    sectionDigit = roll_number[4]-'0';
    (sectionDigit >= 1 && sectionDigit <= 6) ?
  	section=(sectionDigit + 'A'-1)
    : 'error' ;
    printf("Registration Year: %d\n", registrationYear);
    printf("Current Semester: %d\n", semester);
    printf("Section: %c\n", section);
    return 0; 
}

