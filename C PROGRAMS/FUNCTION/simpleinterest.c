#include<stdio.h>
float simple(float p, float r, float t)
{
    float SI;
    SI=(p*r*t)/100;
    return SI;
}
void main()
{
    float pr,ti,ra,s;
    printf("ENTER PRINCIPAL:");
    scanf("%f",&pr);
    printf("ENTER RATE:");
    scanf("%f",&ra);
    printf("ENTER TIME:");
    scanf("%f",&ti);
    s=simple(pr,ra,ti);
    printf("\n SIMPLE INTREST IS:%f",s);
}