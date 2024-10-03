#include <stdio.h>
int main()
{
char a;
for (a=0;a<6;a++)
{
  if (a == 0 || a ==5 )
  { 
    printf("%c %c %c %c %c\n",a+65,a+66, a+67,a+68,a+69);
  } 
  else
  {
  	printf("%c       %c\n",a+65, a+69);
  }
}
return 0;
}
