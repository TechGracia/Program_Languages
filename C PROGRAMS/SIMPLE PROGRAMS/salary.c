#include<stdio.h>
main()
{
    int codeno;
    float basic,da,hra,cca,pf,gross,net;
    printf("Enter Code no:");
    scanf("%d", &codeno);
    printf("Enter basic pay:");
    scanf("%f", &basic);
    da=(basic*50)/100;
    hra=(basic*20)/100;
    cca=(basic*5)/100;
    pf=((basic+da)*12)/100;
    gross=basic+da+hra+cca;
    net=gross-pf;
    printf("\n Basic pay is : %f",basic);
    printf("\n Daily Allowances :%f",da);
    printf("\n House Rent Allowances :%f",hra);
    printf("\n City Compensatory Allowances:%f",cca);
    printf("\n Profit Fare:%f",pf);
    printf("\n Gross Salary:%f",gross);
    printf("\n Net is : %f",net);
    return 0;
}