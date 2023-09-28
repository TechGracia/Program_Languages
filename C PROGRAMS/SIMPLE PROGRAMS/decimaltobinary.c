#include<stdio.h>
void main()
{
    int k,i;
    int bin[8]={0,0,0,0,0,0,0,0};
    printf("\n Enter decimal number:");
    scanf("%d",&k);
    i=7;
    while(k!=0)
    {
        bin[i]=k%2;
        k=k/2;
        i--;
    }
    for(i=0;i<8;i++)
    printf("%d",bin[i]);
}