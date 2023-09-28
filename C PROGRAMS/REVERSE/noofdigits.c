#include<stdio.h>
void main()
{
    int n, count;
    count=0;
    printf("ENTER ANY NUMBER:");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("\n THE NUMBER OF DIGITS IN THE GIVEN NUMBER IS:%d",count);
}