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
        m=m*10+d;
        k=k/10;
    }
    if(n==m)
    printf("%d is a palindrome",n);
    else
    printf("%d is not a palindrome",n);
}