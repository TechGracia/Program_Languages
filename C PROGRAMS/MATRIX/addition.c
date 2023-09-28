#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j;
    for(i=0; i<3; i++)
    for(j=0; j<3; j++)
    {
        printf("\n ENTER NUMBER :");
        scanf("%d",&a[i][j]);
    }
    for(i=0; i<3; i++)
    for(j=0; j<3; j++)
    {
        printf("\n ENTER NUMBER :");
        scanf("%d",&b[i][j]);
    }
    for(i=0; i<3; i++)
    for(j=0; j<3; j++)
    c[i][j]=a[i][j]+b[i][j];
    for(i=0; i<3; i++)
    {
        printf("\n ");
        for(j=0; j<3; j++)
        printf("%3d",a[i][j]);
    }
    for(i=0; i<3; i++)
    {
        printf("\n");
        for(j=0; j<3; j++)
        printf("%3d",b[i][j]);
    }
    for(i=0; i<3; i++)
    {
        printf("\n ");
        for(j=0; j<3; j++)
        printf("%3d",c[i][j]);
    }
}