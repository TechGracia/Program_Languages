#include<stdio.h>
void main()
{
    int arr[4][4];
    int i,j;
    for(i=0; i<4; i++)
    for(j=0; j<4; j++)
    {
        printf("\n ENTER NUMBER :");
        scanf("%d",&arr[i][j]);
    }
    for(i=0; i<4; i++)
    {
        printf("\n");
        for(j=0; j<4; j++)
        printf("%3d",arr[i][j]);
    }
}