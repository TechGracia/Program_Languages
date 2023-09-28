#include<stdio.h>
#define n 20
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
    printf("\n");
    for(i=0;i<l;i++)   
    printf("%5d",ar[i]);
  
}
void bubble(int arr[],int l)
{
    int i,j,temp;
    for(i=0;i<l-1;i++)   
    for(j=0;j<l-1-i;j++) 
    if( arr[j] > arr[j+1])  
    {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
}
void bsearch(int arr[],int l,int num)
{
int pos,first,last,mid;
    pos=-1;
    first=0;
    last=l-1;
    while(first<=last && pos==-1)  
    {
       mid=(first+last)/2;
    if(arr[mid] == num)      
        pos=mid;
    if(num > arr[mid])
       first=mid+1;
    if(num < arr[mid])
       last=mid-1;           
    }
    if(pos>-1)
    printf("\n%d is found on the %d location ",num,pos);
    else
    printf("\n%d is not found ",num);    
}
main()
{
    int arr[n],no,limit;
    printf("\n Enter limit of array <= %d ",n) ;
    scanf("%d",&limit);
    if(limit<=n)
    {
    input(arr,limit);
    show(arr,limit);    
    bubble(arr,limit);
    show(arr,limit);
    printf("\n Enter Number to search ") ;
    scanf("%d",&no);
    bsearch(arr,limit,no);
    }
    else
    printf("\n out of range");
}