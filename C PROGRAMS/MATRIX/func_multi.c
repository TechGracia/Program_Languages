#include<stdio.h>
void input(int a[][3])
{
    int i,j;
    for(i=0; i<3; i++)
    for(j=0; j<3;  j++)
    {
        printf("\n Enter Number");
        scanf("%d",&a[i][j]);
    }
}
void show(int arr[][3])
{
    int i,j;
    for(i=0; i<3; i++)
    {
        printf("\n ");
        for(j=0; j<3; j++)
        printf("%3d",arr[i][j]);
    }
}
void main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j,k;
    printf("\n Enter value of matrix a: \n");
    input(a);
    printf("\n Enter value of matrix b: \n");
    input(b);
    for(i=0; i<3; i++)
    for(j=0; j<3; j++)
    {
        c[i][j]=0;
        for(k=0; k<3; k++)
        c[i][j]=c[i][j]+a[i][k]+b[k][j];
    }
    printf("\n Matrix A: \n");
    show(a);
    printf("\n Matrix B: \n");
    show(b);
    printf("\n Sum of Matrix C: \n");
    show(c);
    


}