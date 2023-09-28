#include<stdio.h>
// call by value example
void swap(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("\n changed value inside function %3d%3d",x,y);
}
void main()
{
    int a,b;
    printf("\n Enter number:");
    scanf("%d%d",&a,&b);
    printf("\n  VALUE entered in main:%3d%3d",a,b);
    swap(a,b);
    printf("\n NEW VALUE in main:%3d%3d",a,b);
}