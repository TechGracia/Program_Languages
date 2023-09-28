#include<stdio.h>
main()
{
float r,h,SA;
printf("Enter Radius and Height of Sphere :");
scanf("%f%f",&r,&h);
SA=(2*3.14*r*h+2*3.14*r*r);
printf("Surface Area of Solid Cyclinder =%f",SA);
return 0;
}