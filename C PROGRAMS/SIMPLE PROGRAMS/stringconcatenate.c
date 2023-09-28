#include<stdio.h>
#include<string.h>
void main()
{
    char str1[50]="HELLO WELCOME TO",str2[50];
    
    strcpy(str2,"AGRA FOR G20 SUMMIT");
    
   
   strcat(str1,str2);
    printf("%s",str1);
}