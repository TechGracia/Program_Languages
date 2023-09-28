#include<stdio.h>
#define SQUARE(n) n*n
void main()
{
    float l,ar;
    printf("\n Enter number:");
    scanf("%f",&l);
    ar=64/SQUARE(l);
    printf("\n Square of a number: %.1f",ar);
}