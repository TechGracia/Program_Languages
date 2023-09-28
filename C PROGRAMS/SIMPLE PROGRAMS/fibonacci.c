#include<stdio.h>
void main()
{
    int n,i,a,b,c;
    printf("\n ENTER LIMIT: ");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("\n %3d %3d",a,b);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        printf("%3d",c);
        a=b;
        b=c;
    }

}