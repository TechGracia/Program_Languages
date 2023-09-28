#include<stdio.h>
void main()
{
    int *x, y;
    y=10;
    x=&y;
    printf("\n the value is =%d", y);
    printf("\n the address is = %u",&y);
    printf("\n the value is = %d",*x);
    printf("\n the address is = %u", x);
    printf("\n the address = %u",&x);
    
}