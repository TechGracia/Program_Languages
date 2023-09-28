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
int leftDiagonal(int arr[][4])
{
int i,j,s=0;
   
    for(i=0;i<4;i++)   
    for(j=0;j<4;j++)     
    if(i==j)
    s=s+arr[i][j];
    return s;
}
void rightdiagonal(int arr[][4])
{
int i,j,s=0;
   
    for(i=0;i<4;i++)   
    for(j=0;j<4;j++)     
    if(i+j== 4-1)
    s=s+arr[i][j];
    
}
void diagonal(int arr[][4])
{
int i,j,s1=0,s2=0;
{
int i,j,s1=0,s2=0;   
    for(i=0;i<4;i++)   
    for(j=0;j<4;j++)  
    {
    if(i==j)
    s1=s1+arr[i][j];
    if(i+j== 4-1)
    s2=s2+arr[i][j];
    }  
    
    printf("\n sum of right diagonal %d",s2);
}
}
void main()
{
    int arr[4][4]={1,2,32,43,5,65,7,8,95,1,2,3,4,5,6,7}; 
    int res;
    show(arr);
    res=leftDiagonal(arr);
    printf("\n sum of left diagonal %d",res);
    rightdiagonal(arr);
    diagonal(arr);
}