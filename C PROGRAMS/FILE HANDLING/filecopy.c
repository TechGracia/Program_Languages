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
    FILE *fp1,*fp2;
    fp1=fopen("report.txt","r");
    fp2=fopen("repo.txt","w");
   
    if(fp1==NULL)
    {
        printf("\n ERROR! FILE NOT FOUND");
        exit(1);
    }
    while(fscanf(fp1,"%d %s %s %f %f %f %f %f %f %f %c",&x.rollno,x.name,x.class1,&x.p,&x.c,&x.m,&x.eng,&x.comp,&x.tot,&x.per,&x.grade)!=EOF)
    {
    
        fprintf(fp2,"\n %1d %20s   %s   %4.1f      %4.1f    %4.1f   %4.1f    %4.1f   %4.1f   %4.1f       %c",x.rollno,x.name,x.class1,x.p,x.c,x.m,x.eng,x.comp,x.tot,x.per,x.grade);
        
    }
    fclose(fp1);
    fclose(fp2);
}