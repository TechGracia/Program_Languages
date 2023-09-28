#include<stdio.h>
void main()
{
    int i,no;
    printf("Enter any number:");
    scanf("%d",&no);
    for(i=1 ; i<=10 ; i++)
    printf("\n%d*%d=%d",no,i,no*i);
}