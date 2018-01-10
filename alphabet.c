#include<stdio.h>
void main()
{
    char s;
    printf("enter a character\n");
    scanf("%c",&s);
    if((s>='A' && s<='Z') || (s>='a' && s<='z'))
   { printf("Alphabet");
   }
   else
  { printf("No");
   }
   }
