#include<stdio.h>
int area(int l,int b)
{
    return l*b;
}
int perimeter(int l,int b)
{
    return 2*(l+b);
}
main()
{
int l,b,ar,p;
printf("enter the lenght and breadth of the rectangle:");
scanf("%d%d",&l,&b);
ar=area(l,b);
p=perimeter(l,b);
printf("area of the rectangle=%d\n perimeter of the rectangle=%d",ar,p);
return 0;
}