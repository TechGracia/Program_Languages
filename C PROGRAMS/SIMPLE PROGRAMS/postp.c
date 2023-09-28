#include<stdio.h>
main()
{
    int x=5;
    x=++x*2+3*x--;
    printf("%d", x);
}