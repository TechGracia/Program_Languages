#include<stdio.h>
int sum(int x , int y)
{
    int s;
    s=x+y;
    return s;
}
main()
{
    int num1, r, num2;
    printf("Enter number:");
    scanf("%d",&num1);
    printf("Enter number:");
    scanf("%d" ,&num2);
    r= sum(num1,num2);
    printf("\n Sum =%d",r);
}