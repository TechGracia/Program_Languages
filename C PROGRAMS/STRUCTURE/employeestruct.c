#include<stdio.h>
#include<conio.h>
#include<ctype.h>
struct employee
{
    int code;
    char name[20];
    float basic,da,hra,gross,pf,net;
};
void main()
{
    struct employee e;
    FILE *fp;
    char ch='Y';
     fp=fopen("emp.txt","a");
   while(toupper(ch)=='Y')
    {
        printf("\n Enter Code of Employee ");
        scanf("%d",&e.code);
        printf("\n Enter Name of Employee ");
        scanf("%s",e.name);
        printf("\n Enter Basic Salary of Employee ");
        scanf("%f",&e.basic);
        e.da=(e.basic*55)/100;
        e.hra=(e.basic*25)/100;
        e.pf=((e.basic+e.da)*12)/100;
        e.gross=e.basic+e.da+e.hra;
        e.net=e.gross-e.pf;
        fprintf(fp,"\n %5d %20s %7.1f %7.1f %7.1f %7.1f %7.1f %7.1f ",e.code,e.name,e.basic,e.da,e.hra,e.gross,e.pf,e.net);
        printf("\n Want to continue  ");
        ch=getche();
    }
    
    fclose(fp);
}