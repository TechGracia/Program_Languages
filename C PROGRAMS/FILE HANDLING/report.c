#include<stdio.h>
#include<conio.h>
#include<ctype.h>
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
void main()
{
    struct student x;
    FILE *fp;
    char ch='Y';
    fp=fopen("report.txt","a");
    while(toupper(ch)=='Y')
    {
        printf("\n ENTER ROLL NO. OF STUDENT:");
        scanf("%d",&x.rollno);
        printf("ENTER NAME OF THE STUDENT:");
        scanf("%s",x.name);
        printf("ENTER CLASS OF THE STUDENT:");
        scanf("%s",&x.class1);
        printf("ENTER PHYSISCS MARKS:");
        scanf("%f",&x.p);
        printf("ENTER CHEMISTRY MARKS:");
        scanf("%f",&x.c);
        printf("ENTER MATHS MARKS:");
        scanf("%f",&x.m);
        printf("ENTER ENGLISH MARKS:");
        scanf("%f",&x.eng);
        printf("ENTER COMPUTER MARKS:");
        scanf("%f",&x.comp);
        x.tot=x.p+x.c+x.m+x.eng+x.comp;
        x.per=(x.tot*100)/500;
        x.grade=calgrade(x.per);
        
        fprintf(fp,"\n %d %s %s %.1f %.1f %.1f %.1f %.1f %.1f %.1f %c",x.rollno,x.name,x.class1,x.p,x.c,x.m,x.eng,x.comp,x.tot,x.per,x.grade);
    
    
        
        printf("\n ROLL NO OF STUDENT IS:%5d",x.rollno);
        printf("\n NAME OF THE STUDENT IS:%30s",x.name);
        printf("\n CLASS OF THE STUDENT IS:%s",x.class1);
        printf("\n PHYSICS MARKS OF THE STUDENT IS:%4.1f", x.p);
        printf("\n CHEMISTRY MARKS OF THE STUDENT IS:%4.1f", x.c);
        printf("\n MATHS MARKS OF THE STUDENT IS:%4.1f", x.m);
        printf("\n ENGLISH MARKS OF THE STUDENT IS:%4.1f", x.eng);
        printf("\n COMPUTER MARKS OF THE STUDENT IS:%4.1f",x.comp);
        
        printf("\n CHEMISTRY GRADE IS : %c",calgrade(x.c));
        printf("\n MATHS GRADE IS : %c",calgrade(x.m));
        printf("\n ENGLISH GRADE IS : %c",calgrade(x.eng));
        printf("\n COMPUTER GRADE IS : %c",calgrade(x.comp));
        printf("\n TOTAL MARKS OF THE STUDENT IS:%4.1f",x.tot);
        printf("\n PERCENTAGE OF THE STUDENT IS :%4.1f",x.per);
        printf("\n GRADE OF THE STUDENT IS:%c",x.grade);
        printf("\n WANT TO CONTINUE");

        ch=getche();
    }
    fclose(fp);
}