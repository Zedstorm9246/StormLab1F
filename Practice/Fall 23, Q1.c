/*Ali and Fatima are classmates who are preparing for their final exam in mathematics. They have a set of data
representing the test scores of students who took the same exam last year. They want to analyze the data
and see how well they need to perform to get a good grade. They use a program that can calculate and
display the following statistics:
 Highest Score: Find the highest test score in the dataset.
 Lowest Score: Find the lowest test score in the dataset.
 Range: Calculate the range, which is the difference between the highest and lowest scores.
 Number of Students: Determine the total number of students who took the test.
 Average Score: Calculate the average test score.
They decide to compare their own scores with the statistics. Ali scored 85 on his last practice test, while
Fatima scored 92. They are both above the average score, but they want to aim for the highest score
possible. They calculate how much they need to improve their scores to reach 98, which is the highest score
in the dataset.
Now, let&#39;s write a C program to perform these calculations and determine the scores they need to achieve.
Input:
Enter the number of students: 10
Enter the marks of each student: 87 92 75 63 98 85 76 71 89 94
Enter Ali&#39;s score: 85
Enter Fatima&#39;s score: 92
Output:

Highest Score: 98
Lowest Score: 63
Range: 35
Number of Students: 10
Average Score: 83.00
Ali&#39;s score: 85, Improvement needed: 13
Fatima&#39;s score: 92, Improvement needed: 6*/

#include<stdio.h>
int main()
{
  int Num_St, marks[100], Ali, ImproveA, Fatima, ImproveF, count;
  int High = 0, Low = 1000, Sum = 0, Range;
  float Average;
  
  //Input number of students
  printf("Enter number of students: ");
  scanf(" %d", &Num_St);
  
  // input marks
  for(int i = 0; i < Num_St; i++)
  {
    count = i + 1;
    printf("Enter Student %d marks: ", count);
    scanf(" %d", &marks[i]);
  }

  printf("Enter Ali's score: ");
  scanf(" %d", &Ali);
  printf("Enter Fatima's score: ");
  scanf(" %d", &Fatima);
  
  for(int i; i < Num_St; i++)
  {
    if(High < marks[i])
    {
        High = marks[i];
    }
    if( Low > marks[i])
    {
        Low = marks[i];
    }
    Sum += marks[i];
  }

  Average = Sum / Num_St;
  Range = High - Low;
  ImproveA = High - Ali;
  ImproveF = High - Fatima;

  printf("Highest Score: %d \n", High);
  printf("Lowest Score: %d \n", Low);
  printf("Range: %d \n", Range);
  printf("Number of students: %d \n", Num_St);
  printf("Average Score: %.2f \n", Average);
  printf("Ali's score: %d, Improvement needed: %d \n", Ali, ImproveA);
  printf("Fatima's score: %d, Improvement needed: %d \n", Fatima, ImproveF);  
}

