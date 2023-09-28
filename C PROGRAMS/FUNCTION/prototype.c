#include<stdio.h>
int sum(int x,int y);
void main()
{
    int x,y,s;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    s=sum(x,y);
    printf("\n sum=%d",s);
}
    int sum(int x, int y)
    {
    return x+y;
    }