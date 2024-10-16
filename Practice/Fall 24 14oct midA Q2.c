//Library management system
#include<stdio.h>
int main()
{
    int Choice, B_choice, Books[5]= {0,0,0,0,0};
    while(Choice != 3)
    {
        printf("1. Check out a book\n");
        printf("2. Return a book\n");
        printf("3. Exit\n");
        printf("Choose an option: ");
        scanf(" %d", &Choice);

        switch (Choice)
        {
        case 1:
            //check out book
            printf("Available Books\n");
            for(int i =1; i <=5 ; i++)
            {
                printf("Books %d\n", i);
            }
            printf("Enter the number of book you want: ");
            scanf(" %d",&B_choice);

            //Check if the book is checked out or not
            if(Books[B_choice] == 0)
            {
                printf("You have successfully checked out book %d\n", B_choice);
                Books[B_choice] = 1;
            }
            else 
            {
                printf("The book is already Checked Out\n");
            }
            break;
        case 2:
            printf("Available Books\n");
            for(int i =1; i <=5 ; i++)
            {
                printf("Books %d\n", i);
            }
            printf("Enter the Number for the book you want to return");
            scanf(" %d",&B_choice);
            Books[B_choice] = 0;
            break;
        case 3:
            break;
        default:
            printf("Wrong input Enter again");
            break;
        }
    }
}

