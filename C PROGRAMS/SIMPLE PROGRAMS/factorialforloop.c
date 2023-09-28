#include<stdio.h>
void main()
{
    int n,f,i;
    printf("Enter Number to calculate its factorial:");
    scanf("%d",&n);
    f=1;
    for(i=n; i>=1; i--)
    f=f*i;
    printf("\n Factorial is :%d = %.1d",n,f);
}