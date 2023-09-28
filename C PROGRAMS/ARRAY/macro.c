#include<stdio.h>
#define PI 3.14
void main()
{
    float r,ar;
    printf("\n ENTER RADIUS:");
    scanf("%f",&r);
    ar=PI*r*r;
    printf("\n AREA OF RADIUS %.1f = %.1f",r,ar);
}