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
        m=m+(d*d);
        k=k/10;
    }
    printf("SQUARE OF THE GIVEN NUMBER IS: %d = %d",n,m);
}