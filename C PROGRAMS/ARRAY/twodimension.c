#include<stdio.h>
void main()
{
    int a[3][4];
    int i,j;
    //input
    for(i=0; i<3; i++)
    for(j=0; j<4; j++)
    {
        printf("Enter number");
        scanf("%d",&a[i][j]);
    }

//printing
    for(i=0; i<3; i++)
    {
        printf("\n");
    for(j=0; j<4; j++)
         printf("%3d",a[i][j]);
    }

}