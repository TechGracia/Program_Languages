#include<stdio.h>
void main()
{
    int a[3][5];
    int i,j;
    for(i=0; i<3; i++)
    for(j=0; j<5; j++)
    {
        printf("\n ENTER NUMBERS :");
        scanf("%d",&a[i][j]);
    }
    for(i=0; i<3; i++)
    {
        printf("\n");
        for(j=0; j<5; j++)
        printf("%5d",a[i][j]);
    }
}