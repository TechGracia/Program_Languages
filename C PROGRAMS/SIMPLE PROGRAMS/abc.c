#include<stdio.h>
void main()
{
    int a[2][2],b[2][2],c[2][2];
    int i,j;
    for(i=0; i<2; i++)
    for(j=0; j<2; j++)
    {
        printf("\n ENTER NUMBER :");
        scanf("%d",&a[i][j]);
    }
    for(i=0; i<2; i++)
    for(j=0; j<2; j++)
    {
        printf("\n ENTER NUMBER :");
        scanf("%d",&b[i][j]);
    }
    for(i=0; i<2; i++)
    for(j=0; j<2; j++)
    c[i][j]=a[i][j]+b[i][j];
    for(i=0; i<2; i++)
    {
        printf("\n ");
        for(j=0; j<2; j++)
        printf("%2d",a[i][j]);
    }
    for(i=0; i<2; i++)
    {
        printf("\n");
        for(j=0; j<2; j++)
        printf("%2d",b[i][j]);
    }
    for(i=0; i<2; i++)
    {
        printf("\n ");
        for(j=0; j<2; j++)
        printf("%2d",c[i][j]);
    }
}