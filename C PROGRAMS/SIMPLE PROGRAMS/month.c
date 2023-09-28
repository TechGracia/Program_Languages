#include<stdio.h>
void main()
{
    int month;
    printf("Enter Month Number:");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("No. of days = 31");
        break;        
        case 4:
        case 6:
        case 9:
        case 11: printf("No. of days = 30");
        break;
        case 2: printf("No. of days = 28");
        break;
        default:
        printf("OUT OF RANGE");
    }
}