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
void line(int n)
{
    int i;
    printf("\n ");
    for(i=0; i<n; i++)
    printf("*");
}
void main()
{
    struct student x;
    FILE *fp;
    fp=fopen("report.txt","r");
    if(fp==NULL)
    {
        printf("\n ERROR! FILE NOT FOUND");
        exit(1);
    }
    line(100);
      printf("\n \t\t\t\t\t REPORT OF STUDENTS");
    printf("\n \t\t\t\t\t-*-*-*-*-*-*-*-*-*-*-\n");
    line(100);
    

    printf("\n ROLLNO          NAME   CLASS PHYSICS CHEMISTRY MATHS ENGLISH COMPUTER TOTAL PERCENTAGE GRADE");
  
    while(fscanf(fp,"%d %s %s %f %f %f %f %f %f %f %c",&x.rollno,x.name,x.class1,&x.p,&x.c,&x.m,&x.eng,&x.comp,&x.tot,&x.per,&x.grade)!=EOF)
    {
        line(100);
        printf("\n %1d %20s   %s   %4.1f      %4.1f    %4.1f   %4.1f    %4.1f   %4.1f   %4.1f       %c",x.rollno,x.name,x.class1,x.p,x.c,x.m,x.eng,x.comp,x.tot,x.per,x.grade);
        line(100);
    }
    fclose(fp);
}