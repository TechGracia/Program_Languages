#include<stdio.h>
void main()
{
    int n,k,m,d;
    printf("Enter the value of n:");
    scanf("%d",&n);
    k=n;
    m=0;
    while(k!=0)
    {
        d=k%10;
        if(d % 2 ==0)
        m=m+d;
        k=k/10;
    }
    printf("SUM OF EVEN DIGIT OF A NUMBER = %d",m);
}