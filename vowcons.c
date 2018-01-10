#include<stdio.h>
void main()
{
    char s;
    printf("enter a character\n");
    scanf("%c",&s);
    if(s=='a' || s=='A' || s=='e' || s=='E' || s=='i' || s=='I' || s=='o' || s=='O'
    || s=='u' || s=='U')
   { printf("vowel");
   }
   else
  { printf("consonant");
   }
   }
