#include<stdio.h>
main()
{
    char grade;
    int roll;
    float p,c,m,co,eng,tot,per;
    char name[50];
    printf("enter roll no.:");
    scanf("%d",&roll);
    printf("enter name:");
    scanf("%s",&name);
    printf("enter physics marks:");
    scanf("%f",&p);
    printf("enter chemistry marks:");
    scanf("%f",&c);
    printf("enter maths marks:");
    scanf("%f",&m);
    printf("enter english marks:");
    scanf("%f",&eng);
    printf("enter computer marks:");
    scanf("%f",&co);
    tot=p+c+m+eng+co;
    per=(tot*100)/500;
    if (per>=80)
    grade='A';
    if (per>=70 && per<80)
    grade='B';
    if (per>=50 && per<70)
    grade='C';
    if (per>=40 && per<50)
    grade='D';
    if (per<40)
    grade='E';
    printf("Total is = %f",tot);
    printf("Percentage is =%f",per);
    printf("\n GRADE IS : %c",grade);
    return 0;
}        
    



    
    
    
