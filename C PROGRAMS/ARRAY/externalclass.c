#include<stdio.h>
int i;
void counter()
{
    i=i+1;
    printf("\n i=%d",i);
}
void main()
{
    extern int y;
    y++;
    printf("\n y=%d",y);
    counter();
    counter();
    counter();
}
int y=32;
