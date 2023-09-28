#include<stdio.h>
main()
{
float l,b,h,V;
printf("Enter Length, Breadth and Height of the Cuboid:");
scanf("%f%f%f",&l,&b,&h);
V=l*b*h;
printf("Volume of Cuboid is =%f", V);
return 0;
}