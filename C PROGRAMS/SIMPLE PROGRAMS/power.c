#include<stdio.h>
#include<math.h>
float power(float x, int y)
{
    int i;
    float p=1;
    for(i=1; i<=y; i++)
    p=p*x;
    return p;
}
void main()
{
    int n2;
    float n1,res;
    printf("\n ENTER BASE NUMBER:");
    scanf("%f",&n1);
    printf("\n ENTER RAISED POWER:");
    scanf("%d",&n2);
    res=power(n1,n2);
    printf("\n %f raised to power %d = %f", n1,n2,res);
}