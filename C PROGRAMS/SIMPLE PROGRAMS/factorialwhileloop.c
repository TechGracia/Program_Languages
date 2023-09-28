#include<stdio.h>
void main()
{
    int n,f,k;
    printf("Enter Number to calculate its factorial:");
    scanf("%d",&n);
    f=1;
    k=n;
    while(n>=1)
    {
        f=f*n;
        n--;
    }
        printf("\n FACTORIAL %dIS:%d",k,f);
    
}
