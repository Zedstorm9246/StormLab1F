 #include <stdio.h>
int main(void)
{
    char A;
    int I;
    printf("Enter Month initial: ");
    scanf("%c", &A);
    printf("Enter Month Number: ");
    scanf("%d", &I);

    switch (A)
    {
    case 'J':
    case 'j':
        switch (I)
            {
            case 0 :
                printf("January");
                break;
            case 1 :
                printf("June");
            case 2 :
                printf("July");
            
            default:
                printf("invalid number");
                break;
            }
        break;
    
    case 'A':
    case 'a':
        switch (I)
            {
            case 0 :
                printf("April");
                break;
            case 1 :
                printf("August");
                break;
            default:
                printf("invalid number");
                break;
            }
        break;
    case 'F':
    case 'f':
        switch (I)
            {
            case 0 :
                printf("February");
                break;
         
            default:
                printf("invalid number");
                break;
            }

        break;
    case 'M':
    case 'm':
        switch (I)
            {
            case 0 :
                printf("March");
                break;
            case 1 :
                printf("May");
         
            default:
                printf("invalid number");
                break;
            }

        break;
    case 'S':
    case 's':
        switch (I)
            {
            case 0 :
                printf("September");
                break;

            default:
                printf("invalid number");
                break;
            }
        break;
    case 'O':
    case 'o':
        switch (I)
            {
            case 0 :
                printf("Octuber");
                break;
    
            default:
                printf("invalid number");
                break;
            }
        break;
    case 'N':
    case 'n':
        switch (I)
            {
            case 0 :
                printf("November");
                break;
            default:
                printf("invalid number");
                break;
            }
        break;
    case 'D':
    case 'd':
        switch (I)
            {
            case 0 :
                printf("December");
                break;
            default:
                printf("invalid number");
                break;
            }
    default:
        printf("invalid Character");
        break;
    }
}
