#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    printf("ENTER THE LIMIT :");
    scanf("%d",&n);
    int *arr = malloc(n * sizeof(int));
    for(i=0; i<n; i++)
    {
        printf("ENTER %d NUMBERS :",i+1);
        scanf("%5d",&arr[i]);
    }
    for(j=0; j<n; j++)
    printf("%5d",*(arr+j));
    free(arr);


}