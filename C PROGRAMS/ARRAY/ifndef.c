#include<stdio.h>
#define YEARS_OLD 12
#ifndef YEARS_OLD
#define YEARS_OLD 10
#endif
int main()
{
    printf("POLI IS OVER %d years old.\n", YEARS_OLD);
}