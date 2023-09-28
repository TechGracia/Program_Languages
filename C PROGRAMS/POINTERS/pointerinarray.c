#include<stdio.h>
void main()
{
    int x[5]={12,34,45,56,78};
    int i;
    int *ptr=x;
    for(i=0; i<5; i++)
    printf("\n %d",x[i]);
    for(i=0; i<5; i++)
    {
        printf("\n %d",*ptr);
        ptr++;
    }

}

