#include<stdio.h>
void main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    if(n<0)
        printf("it is a negative number");
    else if(n>0 && n<=100000)
        printf("it is a positive number");
    else
        printf("it is zero");

}
