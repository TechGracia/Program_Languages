#include<stdio.h>
#include<stdlib.h>
struct employee
{
    int code;
    char name[20];
    float basic,da,hra,gross,pf,net;
};
void line(int n)
{
int i;
printf("\n");
for(i=0;i<n;i++)
printf("=");
}

void main()
{
    struct employee e;
    float snet=0;
    FILE *fp;

     fp=fopen("emp.txt","r");
     if(fp== NULL)
     {
        printf("\n File not found ");
        exit(1);
     }
     while(fscanf(fp," %d %s %f %f %f %f %f %f ",&e.code,e.name,&e.basic,&e.da,&e.hra,&e.gross,&e.pf,&e.net) != EOF)
        {
            printf("\n\n \t\t\t  ABC Company Salary Statement");
             printf("\n \t\t\t  ****************************\n");
            line(90);
            {
            printf("\n\t Code         : %d   \t\t\t\t\t Name of Employee  : %s",e.code,e.name);
            printf("\n\t Basic Pay    : %9.1f \t\t\t\t HRA                : %.1f",e.basic,e.hra);
            printf("\n\t Da           : %9.1f \t\t\t\t PF                 : %.1f",e.da,e.pf);
            printf("\n\t Gross        : %9.1f \t\t\t\t Net Pay            : %.1f\n\n",e.gross,e.net);
            line(90);
            snet=snet+e.net;
            }
            printf("\n Total net Salary %.1f",snet);
            fclose(fp);
        }
}
