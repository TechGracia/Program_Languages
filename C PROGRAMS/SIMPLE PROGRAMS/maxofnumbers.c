#include<stdio.h>
int main()
{
    int a,b,c;
    printf(" \n ENTER ANY THREE NUMBERS:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    printf("\n BIGGEST NUMBER IS %d",a);
    if(b>a && b>c)
    printf("\n BIGGEST NUMBER IS %d",b);
    if(c>a && c>b)
    printf("\n BIGGEST NUMBER IS %d",c);
    return 0;

}
