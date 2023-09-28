#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,s,m,x;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("Enter value of x:");
    scanf("%d",&x);
    s=0;
    i=1;
    while(i<=n)
    {
        m=pow(x,i);
        s=s+m;
        i++;
    }
    printf("Sum of equation:%d",s);
}