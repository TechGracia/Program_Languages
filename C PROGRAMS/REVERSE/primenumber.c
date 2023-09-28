#include<stdio.h>
main()
{
    int i,n,c=0;
    printf("ENTER ANY NUMBER : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            c++;
        }   
    }
    if(c==2)
    {    
    printf("\n %d is a prime number ",n);
    }
    else
    {    
        printf("\n %d is not a prime number ",n);
    }
}