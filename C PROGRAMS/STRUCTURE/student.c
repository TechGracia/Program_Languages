#include<stdio.h>
struct student
{
    int admno;
    char name[40], grade;
    float p,c,m,tot,per;
};
main()
{
    struct student x;
    printf("ENTER ADMISSION NO.:");
    scanf("%d",&x.admno);
    printf("ENTER NAME:");
    scanf("%s",x.name);
    printf("ENTER PHYSICS MARKS:");
    scanf("%f",&x.p);
    printf("ENTER CHEMISTRY MARKS:");
    scanf("%f",&x.c);
    printf("ENTER MATHS MARKS:");
    scanf("%f",&x.m);
    x.tot=(x.p+x.c+x.m);
    x.per=x.tot/300;
    if(x.per>=80)
        x.grade='A';
    else if (x.per>=60 && x.per<80)
        x.grade='B';
    else if (x.per>=50 && x.per<60)
        x.grade='C';
    else if (x.per>=40 && x.per<50)
        x.grade='D';
    else
        x.grade='E';
    printf("\n ADMISSION NUMBER OF STUDENT IS:%d",x.admno);
    printf("\n NAME OF THE STUDENT IS:%s",x.name);
    printf("\n PHYSICS MARKS IS:%2f",x.p);
    printf("\n CHEMISTRY MARKS IS:%2f",x.c);
    printf("\n MATHS MARKS IS:%2f",x.m);
    printf("\n TOTAL OF ALL SUBJECTS IS:%2f",x.tot);
    printf("\n PERCENTAGE OF STUDENT IS:%2f",x.per);
    printf("\n GRADE OF STUDENT IS:%c",x.grade);
}