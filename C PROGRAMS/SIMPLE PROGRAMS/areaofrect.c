#include<stdio.h>
main()
{
int l,b,ar,p;
printf("enter the lenght and breadth of the rectangle:");
scanf("%d%d",&l,&b);
ar=l*b;
p=2*(l+b);
printf("area of the rectangle=%d\n perimeter of the rectangle=%d",ar,p);
return 0;
}