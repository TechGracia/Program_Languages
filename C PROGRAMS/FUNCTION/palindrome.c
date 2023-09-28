#include<stdio.h>
char palindrome(int n)
{
    int k,m,d;
    k=n;
    m=0;
    while(k!=0)
    {
        d=k%10;
        m=m*10+d;
        k=k/10;
    }
    if(n==m)
      return 'Y';
    else
      return 'N';
}
void main()
{
    int n;
    char k;
    printf("ENTER ANY NUMBER:");
    scanf("%d",&n);
    k=palindrome(n);
    if(k=='Y')
    printf("\n THE NUMBER IS PALINDROME = %d",n);
    else
    printf("\n THE NUMBER IS NOT A PALINDROME = %d",n);

}