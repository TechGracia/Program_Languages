#include<stdio.h>
#include<string.h>
void main()
{
    int age;
    char result[15];
    printf("enter age of the person:");
    scanf("%d",&age);
    if (age>=20)
    strcpy(result,"ADULT");
    else if (age>=19)
    strcpy(result,"TEENAGER");
    else if (age>=12)
    strcpy(result,"CHILDREN");
    else if (age>=0)
    strcpy(result,"INFANT");
    printf("%s",result);
}