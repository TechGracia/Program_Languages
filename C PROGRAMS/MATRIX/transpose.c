#include<stdio.h>
void show(int ar[][4])
{
    int i,j;
    printf("\n");
 for(i=0;i<4;i++)   
    {
        printf("\n")  ;
        for(j=0;j<4;j++)            
        printf("%3d",ar[i][j]);
    }
}
void transpose(int arr[][4])
{
int c[4][4],i,j;
   
    for(i=0;i<4;i++)   
    for(j=0;j<4;j++)     
    c[j][i]=arr[i][j];
    show(c);   
}
void main()
{
    int arr[4][4]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7}; 
    show(arr);
    transpose(arr);
}