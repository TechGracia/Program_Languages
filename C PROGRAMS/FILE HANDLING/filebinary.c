#include<stdio.h>
#include<conio.h>
#include<ctype.h>
struct employee
{
    int code;
    char name[20];
    float basic,da,hra,gross,pf,net,cca;
};
void main()
{
    struct employee e;
    FILE *fp;
    char ch='Y';
    fp=fopen("emp.dat","ab");
    while(toupper(ch)=='Y')
    {
        printf("Enter Code no of the Employee:");
        scanf("%d", &e.code);
        printf("Enter Name of the Employee:");
        scanf("%s",e.name);
        printf("Enter basic pay of the Employee:");
        scanf("%f", &e.basic);
        e.da=(e.basic*50)/100;
        e.hra=(e.basic*20)/100;
        e.cca=(e.basic*5)/100;
        e.pf=((e.basic+e.da)*12)/100;
        e.gross=e.basic+e.da+e.hra+e.cca;
        e.net=e.gross-e.pf;
        fwrite(&e,sizeof(e),1,fp);
        printf("\n Want to Continue:");
        ch=getche();
    }
    fclose(fp);

}