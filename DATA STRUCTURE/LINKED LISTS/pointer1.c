#include<stdio.h>
int main()
{
    int x,*p,**y;
    x=100;
    p=&x;
    y=&p;
    printf("\n The value of x = %d",x);
    printf("\n The address of x is = %u",&x);
    printf("\n The value of pointer p is = %d",*p);
    printf("\n The pointer p store the address of x = %u",*p);
}