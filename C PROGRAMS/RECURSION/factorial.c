#include<stdio.h>
int fact(int n)
{
    int i;
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
void main()
{
    int n,f;
    printf("ENTER VALUE OF N:");
    scanf("%d",&n);
    f=fact(n);
    printf("\n factorial of %d = %d",n,f);
}