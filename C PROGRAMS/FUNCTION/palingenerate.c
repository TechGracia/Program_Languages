#include<stdio.h>
int palindrome(int num)
{
    int k,m,d;
    k=num;
    m=0;
    while(k!=0)
    {
        d=k%10;
        m=m*10+d;
        k=k/10;
    }
    if(num==m)
      return 1;
    else
      return 0;
}
void main()
{
    int m,n,k,i;
    printf("ENTER limit starting : ");
    scanf("%d",&m);
    printf("ENTER limit ending : ");
    scanf("%d",&n);
    

    for(i=m;i<=n;i++)
    {
    k=palindrome(i);
    if(k==1)
    printf("%6d",i);
    }
}