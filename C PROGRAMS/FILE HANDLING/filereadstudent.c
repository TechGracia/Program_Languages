#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
struct student
{
    int rollno;
    char name[40],class1[5];
    float p,c,m,eng,comp,tot,per;
    char grade;
};
void main()
{
    struct student x;
    FILE *fp;
    char ch='Y';
    fp=fopen("report.dat","rb");
    if(fp==NULL)
    {
        printf("\n FILE NOT FOUND");
        exit(1);
    }
    while(fread(&x,sizeof(x),1,fp)==1)
    {
        printf("\n %d %s %s %.1f %.1f %.1f %.1f %.1f %.1f %.1f %c",x.rollno,x.name,x.class1,x.p,x.c,x.m,x.eng,x.comp,x.tot,x.per,x.grade);
    }
    fclose(fp);
}