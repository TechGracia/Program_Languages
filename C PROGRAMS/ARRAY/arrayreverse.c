#include<stdio.h>
void main()
{
    int a,k,m,d;
    a=1234567642;
    k=a;
    m=0;
    while(k!=0)
    {
        d=k%10;
        m=m*10+d;
        k=k/10;
    }
    printf("REVERSE OF : %d = %d",a,m);
}