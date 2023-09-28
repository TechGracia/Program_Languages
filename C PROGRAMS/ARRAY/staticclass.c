#include<stdio.h>
void counter()
{
    auto int i=1;
    static int k=1;
    printf("\n i=%d k=%d",i,k);
    i=i+1;
    k=k+1;
    printf("\n i=%d k=%d ",i,k);
}
void main()
{
    counter();
    counter();
    counter();
}