#include<stdio.h>
// # define n 20
// linear search is applied on unsorted number
void input(int a[],int l)
{
    int i;
 for(i=0;i<l;i++)     
    {       
       printf("\n Enter Number ");
       scanf("%d",&a[i]);
    }
}
void show(int ar[],int l)
{
    int i;
    for(i=0;i<l;i++)   
    printf("%5d",ar[i]);
  
}
void search(int arr[],int l,int num)
{
int i,pos;
   pos=-1;
   i=0;
    while(i< l && pos==-1)  
    {
    if(arr[i] == num)      
    pos=i;
    i++;    
    }
    if(pos>-1)
    printf("\n%d is found on the %d location ",num,pos);    
    else
    printf("\n%d is not found ",num);
}
void main()
{
    int arr[n],no,limit;
    printf("\n Enter limit of array %d ",n) ;
    scanf("%d",&limit);
    if(limit<=n)
    {
    input(arr,limit);
    show(arr,limit);
    printf("\n Enter Number to search ") ;
    scanf("%d",&no);
    search(arr,limit,no);
    }
    else
    printf("\n out of range");
}