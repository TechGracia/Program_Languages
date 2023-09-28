#include<stdio.h>
#include<math.h>
float areaT(float a,float b,float c)
{
    float ar,s;  //local variables
    s=(a+b+c)/2;
ar=sqrt(s*(s-a)*(s-b)*(s-c));
return ar;

}
main()
{
float a,b,c,s,res;
printf("enter the three sides of triangle:");
scanf("%f%f%f",&a,&b,&c);
res=areaT(a,b,c);
printf("area of triangle is:%7.1f",res);
return 0;
}