#include<stdio.h>
void main()
{
    int month,nod;
    printf("Enter Month Number:");
    scanf("%d",&month);
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    nod=31;2
    if(month==4||month==6||month==9||month==11)
    nod=30;
    if(month==2)
    nod=28;
    printf("NO. OF DAYS =%d",nod);
}