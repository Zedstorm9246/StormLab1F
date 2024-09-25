/*Task3:
Write a program to control a coffee machine. Allow the user to input the type of coffee as B for Black and W for White. Ask the user if the cup size is double and if the coffee is manual. The following table details the time chart for the machine for each coffee type. Display a statement for each step. If the coffee size is double, increase the baking time by 50 percent. Use functions to display instructions to the user and to compute the coffee time.*/

#include<stdio.h>
int main()
{
    char CoffeeType, Size;
    float Water, Sugar, MixWell, Coffee, Milk, MixWell2;
    printf("How do you like your coffee, Enter 'B' for Black or 'W' for white: ");
    scanf(" %c", &CoffeeType);

    switch (CoffeeType)
    {
    case 'b':
    case 'B':
        Water = 20;
        Sugar = 20;
        MixWell = 25;
        Coffee = 15;
        MixWell2 = 25;

        printf("What size you want, Enter 'S' for Small or 'D' for Double: ");
        scanf(" %c", &Size);
        switch (Size)
        {

        case 's':
        case 'S':
            printf("Put Water  %.1fmins\n", Water);
            printf("Add Sugar  %.1fmins\n", Sugar);
            printf("Mix Well   %.1fmins\n", MixWell);
            printf("Add Coffee %.1fmins\n", Coffee);
            printf("Mix Well   %.1fmins\n", MixWell2);
        break;

        case 'd':
        case 'D':
            Water += (Water * 0.5);
            Sugar += (Sugar * 0.5);
            MixWell += (MixWell * 0.5);
            Coffee += (Coffee * 0.5);
            MixWell2 += (MixWell2 * 0.5);
            printf("Put Water  %.1fmins\n", Water);
            printf("Add Sugar  %.1fmins\n", Sugar);
            printf("Mix Well   %.1fmins\n", MixWell);
            printf("Add Coffee %.1fmins\n", Coffee);
            printf("Mix Well   %.1fmins\n", MixWell2);
        break;

        default:
            printf("Invalid Size.");
            return 0;
        break;
        }

    break;

    case 'w':
    case 'W':
        Water = 15;
        Sugar = 15;
        MixWell = 20;
        Coffee = 2;
        Milk = 4;
        MixWell2 = 20;
        printf("What size you want, Enter 'S' for Small or 'D' for Double: ");
        scanf(" %c", &Size);
        switch (Size)
        {
        case 's':
        case 'S':
            printf("Put Water  %.1fmins\n", Water);
            printf("Add Sugar  %.1fmins\n", Sugar);
            printf("Mix Well   %.1fmins\n", MixWell);
            printf("Add Coffee %.1fmins\n", Coffee);
            printf("Add Milk   %.1fmins\n", Milk);
            printf("Mix Well   %.1fmins\n", MixWell2);
        break;

        case 'd':
        case 'D':
            Water += (Water * 0.5);
            Sugar += (Sugar * 0.5);
            MixWell += (MixWell * 0.5);
            Coffee += (Coffee * 0.5);
            Milk += (Milk * 0.5);
            MixWell2 += (MixWell2 * 0.5);
            printf("Put Water  %.1fmins\n", Water);
            printf("Add Sugar  %.1fmins\n", Sugar);
            printf("Mix Well   %.1fmins\n", MixWell);
            printf("Add Coffee %.1fmins\n", Coffee);
            printf("Add Milk   %.1fmins\n", Milk);
            printf("Mix Well   %.1fmins\n", MixWell2);
        break;
        
        default:
            printf("Invalid Size.");
            return 0;
        break;
        }
        
    break;
    
    default:
        printf("Invalid Type of coffee.");
        return 0;
    break;
    }
}
