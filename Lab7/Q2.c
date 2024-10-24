/* Write a program that takes a string as input from the user and counts the frequency
of each vowel (A, E, I, O, U) in the string*/

#include<stdio.h>
int main()
{
    char str[100];
    int a_count = 0, e_count = 0, i_count = 0, o_count = 0, u_count = 0, i = 0; 
    printf("Enter a string");
    gets(str);
    while( str[i] != '\0')
    {
        
        printf("hello");
        switch (str[i])
        {
        case 'a':
        case 'A':
            a_count ++;
            break;
        case 'e':
        case 'E':
            e_count ++;
            break;
        case 'i':
        case 'I':
            i_count ++;
            break;
        case 'o':
        case 'O':
            o_count ++;
            break;
        case 'u':
        case 'U':
            u_count ++;
            break;
        default:
            break;
        }
        i++;
    }
    printf("a = %d, e = %d, i = %d, o = %d, u = %d", a_count, e_count, i_count, o_count, u_count);

    
}