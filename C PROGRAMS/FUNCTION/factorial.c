#include<stdio.h>
int fact(int n)
{
    int f=1;
    int i;
    for (i=n; i>=1; i--)
    f=f*i;
    return f;
}
void main()
{
    int n,r;
    float ncr;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("Enter value of r:");
    scanf("%d",&r);
    ncr=(float)fact(n)/(fact(r)*fact(n-r));
    printf("\n NCR=%f", ncr);
}