#include<stdio.h>
void main()
{
    int n,large,pos;
    int arr[100],i;
    printf("Enter Limit <=100 :");
    scanf("%d",&n);
    if(n<=100)
    {
        for(i=0; i<=n; i++)
        {
            printf("enter number : ");
            scanf("%d",&arr[i]);
        }
        large=arr[0];
        pos=-1;
        for(i=1; i<n; i++)
        if(large<arr[i])
        {
            
        }
    }
}