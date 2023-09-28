#include<stdio.h>
int main()
{
    int a[10],i,j,temp;
    for(i=0; i<10; i++)
    {
        printf("ENTER NUMBER :");
        scanf("%d",&a[i]);
    }
    printf("\n unsorted numbers are : ");
    for(i=0; i<10; i++)
    printf("%5d",a[i]);
    
    for(i=0; i<10-1; i++)
    for(j=0; j<10-1-i; j++)
    if(a[j]>a[j+1])
    {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
    printf("\n sorted numbers are : ");
    for(i=0; i<10; i++)
    printf("%5d",a[i]);
    return 0;
}