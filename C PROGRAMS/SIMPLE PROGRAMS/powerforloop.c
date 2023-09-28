#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,s,m,x;
    printf("Enter value of x:");
    scanf("%d",&x);
    s=0;
    for(i=2; i<=x; i=i+2)
    {
        m=pow(i,2);
        s=s+m;
    }
    printf("Sum of equation: %d",s);
}
