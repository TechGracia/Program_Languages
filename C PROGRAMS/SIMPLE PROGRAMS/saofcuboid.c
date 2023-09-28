#include<stdio.h>
main()
{
float l,b,h,SA;
printf("Enter Length,Breadth and Height :");
scanf("%f%f%f",&l,&b,&h);
SA=2*(l*b+b*h+h*l);
printf("Surface Area of cuboid=%f",SA);
return 0;
}