#include<stdio.h>
int specialnumber(int n)
{
    int k,m,d,f,i;
    k=n;
    m=0;
    while(k!=0)
    {
        d=k%10;
        f=1;
        for(i=d; i>=1; i--)
        f=f*i;
        m=m+f;
        k=k/10;
    }
    if (n==m)
      return 0;
    else
     return 1;
}
void main()
{
    int n,k;
    printf("Enter the value of n:");
    scanf("%d",&n);
    k=specialnumber(n);
    if(k==0)
    printf("\n THE NUMBER IS A SPECIAL NUMBER = %d",n);
    else
    printf("\n THE NUMBER IS NOT A SPECIAL NUMBER = %d",n);

}