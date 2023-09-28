#include<stdio.h>
#include<math.h>
main()
{
int a,b,c,s,ar;
printf("enter the three sides of triangle:");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2;
ar=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of triangle is:%d",ar);
return 0;
}