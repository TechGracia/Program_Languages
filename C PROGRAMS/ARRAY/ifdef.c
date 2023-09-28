#include<stdio.h>
#define YEARS_OLD 19
int main()
{
    #ifdef YEARS_OLD
    printf("MR. POLI IS OVER %d YEARS OLD. \n ",YEARS_OLD);
    #endif
    printf("HE IS A GREAT PERSON AND A GOOD FRIEND ONE CAN EVER HAVE.\n");
    return 0;

}