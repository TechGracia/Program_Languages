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
    if (strcmpi(category,"Wholesaler")==0)
    {
        if(pur>=10000)
          dis=(pur*30)/100;
        else
          dis=(pur*25)/100;
    }
    if (strcmpi(category,"Retailer")==0)
    {
        if(pur>=5000)
          dis=(pur*25)/100;
        else
          dis=(pur*20)/100;
    }
    if (strcmpi(category,"Student")==0)
    {
        if(pur>=500)
          dis=(pur*20)/100;
        else
          dis=(pur*5)/100;
    }
    printf("Category is:%s",category);
    printf("\n Purchase Amount is:%f",pur);
    printf("\n Discount got :%f",dis);
}
