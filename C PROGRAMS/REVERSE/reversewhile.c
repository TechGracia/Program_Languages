#include<stdio.h>
void main()
{
    int n,k,m,d;
    n=123456;
    k=n;
    m=0;
    while(k!=0)
    {
        d=k%10;
        m=m*10+d;
        k=k/10;
    }
    printf("REVERSE OF:%d = %d",n,m);
}