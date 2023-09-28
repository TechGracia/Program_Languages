#include<stdio.h>
void entry(int a[],int n)
{
    int i;
     for(i=0; i<n; i++)
    {
        printf("ENTER NUMBER :");
        scanf("%d",&a[i]);
    }
}
 
 void show(int x[],int n)
 {
    int i;
    for(i=0; i<10; i++)
    printf("%5d",x[i]);
  
 }
 void bubble(int a[],int n)
{
    int i,j,temp;
    for(i=0; i<n-1; i++)
    for(j=0; j<n-1-i; j++)
    if(a[j]>a[j+1])
    {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
   
}


int main()
{
    int y[100],n;
    printf("\n Enter limit of n : ");
    scanf("%d",&n);
    if(n <=100)
    {
        entry(y,n);
        printf("\n unsorted numbers are : \n");
        show(y,n);
        bubble(y,n);
        printf("\n sorted numbers are : \n");
        show(y,n);
    

    }
    else
    printf("\n out of range  ");

    return 0;
}