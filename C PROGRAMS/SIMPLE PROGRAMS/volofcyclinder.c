#include<stdio.h>
main()
{
float r,h,V;
printf("Enter Radius and Height of the Cyclinder:");
scanf("%f%f",&r,&h);
V=3.14*r*r*h;
printf("Volume of Cyclinder is =%f", V);
return 0;
}