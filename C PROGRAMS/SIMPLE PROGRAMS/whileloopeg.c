#include<stdio.h>
void main()
{
    int i;
    i=1000;
    while(i>=100)
    {
        printf("%5d",i);
        i=i-100;
    }
}