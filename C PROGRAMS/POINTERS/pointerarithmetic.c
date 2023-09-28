#include<stdio.h>
void main()
{
    int *x,y=10;
    float *g,h=11.2;
    char *ch,c='A';
    x=&y;
    g=&h;
    ch=&c;
    printf("\n the value of y = %d",*x);
    printf("\n the value of h = %d ",*g);
    printf("\n the value of c = %c\n",*ch);
    printf("\n the address of y = %u",x);
    printf("\n the address of h = %u",g);
    printf("\n the address of c = %u\n",ch);
    printf("\n the address = %u",&x);
    printf("\n the address = %u",&g);
    printf("\n the address = %u\n",&ch);
    x++;
    y++;
    ch++;
    printf("\n move the pointer\n");
    printf("\n the address of y = %u",x);
    printf("\n the address of h = %u",g);
    printf("\n the address of c = %u\n",ch);
    printf("\n the address = %u",&x);
    printf("\n the address = %u",&g);
    printf("\n the address = %u",&ch);
    
}   