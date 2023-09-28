#include<stdio.h>
void main()
{
    int a[10];
    int i,k;
    for(i=0; i<10; i++)
    {
        printf("\n ENTER ANY NUMBER :");
        scanf("%d",&a[i]);
    }
    for(k=0; k<10; k++)
    printf("%5d", a[k]);
}