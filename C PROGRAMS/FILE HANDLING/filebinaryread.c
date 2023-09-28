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
    fp=fopen("emp.dat","rb");
    if(fp==NULL)
    {
        printf("\n FILE NOT FOUND");
        exit(1);
    }
    while(fread(&e,sizeof(e),1,fp)==1)
    {
        printf("\n %5d %20s %7.1f %7.1f %7.1f %7.1f %7.1f %7.1f %7.1f",e.code,e.name,e.basic,e.hra,e.cca,e.pf,e.net,e.gross);
    }
    fclose(fp);
}