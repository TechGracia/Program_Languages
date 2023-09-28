#include<stdio.h>
void input(int a[][4])
{
    int i,j;
 for(i=0;i<3;i++)   
    for(j=0;j<4;j++)     
    {       
      printf("\n Enter Number ");
      scanf("%d",&a[i][j]);
    }
}
void show(int ar[][4])
{
    int i,j;
 for(i=0;i<3;i++)   
    {
        printf("\n")  ;
        for(j=0;j<4;j++)            
        printf("%3d",ar[i][j]);
    }
}
void findLarge(int arr[][4])
{
int i,j,large,rpos=-1,cpos=-1;
   large=arr[0][0];
    for(i=0;i<3;i++)   
    for(j=0;j<4;j++)      
    if(large < arr[i][j])      
    {
        large=arr[i][j];
        rpos=i;
        cpos=j;
    }
    printf("\n%d is found on the %d row and %d column",large,rpos,cpos);   
}
void main()
{
    int arr[3][4];    
    input(arr);
    show(arr);
    findLarge(arr);
}