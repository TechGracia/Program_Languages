#include<stdio.h>
int armstrong(int n)
{
    int k,m,d;
    k=n;
    m=0;
    while(k!=0)
    {
        d=k%10;
        m=m+(d*d*d);
        k=k/10;
    }
    if(n==m)
      return 0;
    else
      return 1;
}
void main()
{
    int n,k;
    printf("Enter the value of n:");
    scanf("%d",&n);
    k=armstrong(n);
    if (k==0)
    printf("\n THE NUMBER IS A ARMSTRONG NUMBER : %d",n);
    else
    printf("\n THE NUMBER IS NOT A ARMSTRONG NUMBER : %d",n);
}