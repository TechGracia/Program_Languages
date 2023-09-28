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
char calgrade(float per)
{
    char grade;
    if (per>=90)
        grade='A';
    else if (per>=80)
         grade='B';
    else if (per>=70)
         grade='C';
    else if (per>=60)
        grade='D';
    else
         grade='E';
    return grade;

}

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

  
    while(fscanf(fp,"%d %s %s %f %f %f %f %f %f %f %c",&x.rollno,x.name,x.class1,&x.p,&x.c,&x.m,&x.eng,&x.comp,&x.tot,&x.per,&x.grade)!=EOF)
    {
        line(100);
        printf("\n Roll          : %1d \t\t Name of Student         : %20s  ",x.rollno,x.name);
        printf("\n Class         : %s  \t\t Section                 : ",x.class1);
        line(80); 
        printf("\n Physics   \t 100\t\t %.1f       \t\t %c",x.p,calgrade(x.p));
        printf("\n Chemistry  \t 100\t\t %.1f       \t\t %c",x.c,calgrade(x.c));
        printf("\n Maths       \t 100\t\t %.1f       \t\t %c",x.m,calgrade(x.m));
        printf("\n English      \t 100\t\t %.1f       \t\t %c",x.eng,calgrade(x.eng));
        printf("\n Computer      \t 100\t\t %.1f       \t\t %c",x.comp,calgrade(x.comp));
        line(80);
        printf("\n TOTAL         : \t\t\t %.1f       \t\t ",x.tot);
        printf("\n PERCENTAGE    :  \t\t\t %.1f       \t\t ",x.per);
        printf("\n OVERALL GRADE :   \t\t\t %c       \t\t",x.grade);
        

        line(100);
        getch();
    }
    fclose(fp);
}