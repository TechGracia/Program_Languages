#include<stdio.h>
void main()
{
    int n,k,m,d,f,i;
    printf("Enter a number:");
    scanf("%d",&n);
    k=n;
    m=0;
    while(k!=0)
    {
        d=k%10;
        f=1;
        for(i=d; i>=1; i--)
        f=f*i;
        m=m+f;
        k=k/10;
    }
    if (n==m)
    printf("%d is a special number",m);
    else
    printf("%d is not a special number",m);
}