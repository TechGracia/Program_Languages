#include<stdio.h>
#define YEARS_OLD 19
int main()
{
    #if YEARS_OLD<=10
    printf("POLI IS A GREAT RESOURCE.\n");
    #elif YEARS_OLD>10
    printf("POLI IS OVER %d YEARS OLD.\n",YEARS_OLD);
    #endif
}