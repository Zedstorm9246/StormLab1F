/*7. Make another pattern like this using characters
    A B C D E
    B       F
    C       G
    D       H
    E       I
    F G H I J 
*/ 

#include<stdio.h>

int main()
{
    for(int i = 0 ; i < 6 ; i++)
    {
        if(i == 0 || i == 5)
        {
            printf("%c %c %c %c %c\n", i+65, i+66, i+67, i+68, i+69);
        }
        else
        {
            printf("%c       %c\n", i+66, i+70);
        }
    }
}


             
