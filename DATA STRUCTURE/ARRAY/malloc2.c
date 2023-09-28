#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    printf("ENTER THE LIMIT :");
    scanf("%d",&n);
    int *roll = malloc(n * sizeof(int));
    float *per = malloc(n * sizeof(float));
    for(i=0; i<n; i++)
    {
        printf("ENTER ROLL NO. :");
        scanf("%d",&roll[i]);
        printf("ENTER PERCENTAGE :");
        scanf("%f",&per[i]);
    }
    for(j=0; j<n; j++)
    printf("\n %5d \t %7.1f",*(roll+j),per[j]);
    free(roll);
    free(per);
    

}