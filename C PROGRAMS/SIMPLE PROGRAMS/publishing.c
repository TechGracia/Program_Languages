#include<stdio.h>
#include<string.h>
void main()
{
    char category[50];
    float pur;
    float dis=0;
    printf("Enter Category:");
    scanf("%s",category);
    printf("Enter Purchase Amount:");
    scanf("%f",&pur);
    if ((strcmpi(category,"Wholesaler")==0) && pur>500000)
         dis=(pur*38.0)/100;
    else
         dis=(pur*20)/100;
    if (strcmpi(category,"Retailer")==0 && pur>200000)
            dis=(pur*30.0)/100;
    else
            dis=(pur*20)/100;
    if (strcmpi(category,"Retailer")==0 && pur>1000)
            dis=(pur*15.0)/100;
    else
            dis=0;
    printf("Category is:%s",category);
    printf("\n Purchase Amount is:%f",pur);
    printf("\n Discount got :%f",dis);
}
    
    