#include<stdio.h>
int sumofdigits(int n)
{
    int r,s=0;
    if(n!=0)
    {
        r=n/10;
        s=r+sumofdigits(n/10);
    }
    else 
    return 0;
}
void main()
{
    
}