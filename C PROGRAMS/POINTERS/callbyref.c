#include<stdio.h>
void change(int *x,int*y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("\n new value %d and %d ", *x,*y);
}
void main()
{
    int a=12, b=34;
    printf("\n value is %d and %d ",a,b);
    change(&a,&b);
    printf("\n new value %d and %d ", a,b);++
}