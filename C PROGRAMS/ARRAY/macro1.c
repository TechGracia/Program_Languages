#include<stdio.h>
#define areaofrect(l,b) l*b
void main()
{
    float l,b,ar;
    printf("\n ENTER LENGHT:");
    scanf("%f",&l);
    printf("\n ENTER BREADTH:");
    scanf("%f",&b);
    ar=areaofrect(l,b);
    printf("\n AREA OF RECTANGLE %.1f",ar);
}