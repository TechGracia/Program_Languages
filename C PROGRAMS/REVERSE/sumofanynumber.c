#include<stdio.h>
void main()
{
    int n,k,m,d;
    n=123;
    k=n;
    m=0;
    while(k!=0)
    {
        d=k%10;
        m=m+d;
        k=k/10;
    }
    printf("SUM OF:%d = %d",n,m);
}