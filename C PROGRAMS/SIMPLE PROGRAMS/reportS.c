#include<stdio.h>
#include<string.h>
main()
{
    char grade[2];
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
    if (per>=90)
    strcpy(grade,"A1");
    else if (per>=80)
    strcpy(grade,"A2");
    else if (per>=70)
    strcpy(grade,"B1");
    else if (per>=60)
    strcpy(grade,"B2");
    else if (per>=50)
    strcpy(grade,"C1");
    else if (per>=40)
    strcpy(grade,"D1");
    else
    strcpy(grade,"E");
    printf("Total is = %f",tot);
    printf("Percentage is =%f",per);
    printf("\n GRADE IS : %s",grade);
    return 0;
}        
    




    
    
    
