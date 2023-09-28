#include<stdio.h>
void main()
{
    int n,k,se,so,d,c,s;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    se=0;
    so=0;
    k=n;
    s=0;
    c=0;
    while(n!=0)
    {
        d=n%10;
        if(d%2==0)
          se=se+d;
        if(d%2!=0)
          so=so+d;
        c=c+1;
        s=s+d;
        n=n/10;
    }
    printf("\n SUM OF EVEN DIGITS ARE : %d",se);
    printf("\n SUM OF ODD DIGITS ARE : %d",so);
    printf("\n number of  DIGITS ARE : %d",c);
    printf("\n SUM OF ALL DIGITS ARE : %d",s);
}
