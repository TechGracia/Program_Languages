#include<stdio.h>
void main()
{
    int i,j;    
    for(i=5; i>=1; i--)
    {
        printf("\n");
        for(j=1; j<=i; j++)
        printf("*");
    }
}