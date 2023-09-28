#include<stdio.h>
struct student
{
    int admno;
    char name[40], grade;
    float p,c,m,tot,per;
};
void line(int n,char ch)
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
    printf("%c",ch);
}
main()
{
    struct student x[5];
    int i;
    for(i=0; i<2; i++)
    {
    printf("ENTER ADMISSION NO.:");
    scanf("%d",&x[i].admno);
    printf("ENTER NAME:");
    scanf("%s",x[i].name);
    printf("ENTER PHYSICS MARKS:");
    scanf("%f",&x[i].p);
    printf("ENTER CHEMISTRY MARKS:");
    scanf("%f",&x[i].c);
    printf("ENTER MATHS MARKS:");
    scanf("%f",&x[i].m);
    x[i].tot=(x[i].p+x[i].c+x[i].m);
    x[i].per=x[i].tot/300;
    if(x[i].per>=80)
        x[i].grade='A';
    else if (x[i].per>=60 && x[i].per<80)
        x[i].grade='B';
    else if (x[i].per>=50 && x[i].per<60)
        x[i].grade='C';
    else if (x[i].per>=40 && x[i].per<50)
        x[i].grade='D';
    else
        x[i].grade='E';
    }
    line(80,'*');
    printf("\n Admono              Name       Phy     Chem    Maths  Total     Per  Grade");
    line(80,'*');


    for(i=0; i<2; i++)
{
     printf("\n %d\t%20s %7.1f %7.1f %7.1f %7.1f %7.1f \t %c",x[i].admno,x[i].name,x[i].p,x[i].c,x[i].m,x[i].tot,x[i].per,x[i].grade);

    line(80,'*');
}
   // line(80,'*');
// line(80,'@');
// line(100,'=');



}