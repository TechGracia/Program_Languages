#include<stdio.h>
void main()
{
    int year,y;
    printf("Enter year Number:\n");
    scanf("%d",&year);
    y=year%400==0 || year%100==0 || year%4==0;
    switch(y)   
     {
        case 1:
        printf("\n %d IS A LEAP YEAR.\n",year);
        break;        
        case 0:
        printf("\n %d IS NOT A LEAP YEAR.\n",year);
        break;
        default:
        printf("OUT OF RANGE");
    }
}