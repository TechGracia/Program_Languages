#include<stdio.h>
#include<math.h>
main()
{
int p;
float AM,r,t,CI;
printf("Enter Principal =");
scanf("%d",&p);
printf("Enter Rate =");
scanf("%d",&r);
printf("Enter Time =");
scanf("%d",&t);
AM=p*pow((1+r/100),t);
CI=AM-p;
printf("Amount is =%f \n Compound Interest is =%f",AM,CI);
return 0;
}