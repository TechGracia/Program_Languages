#include<stdio.h>
void main()
{
    int i,j,rows;
    printf("\n ENTER NUMBER OF ROWS:");
    scanf("%d",&rows);
    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("1");
        }
        printf("\n");
    }
}