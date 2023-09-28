#include<stdio.h>
#include<string.h>
char calgrade(float per)
{
    char grade;
    if (per>=70)
        grade='A';
    else if (per>=60)
         grade='B';
    else if (per>=50)
         grade='C';
    else if (per>=40)
        grade='D';
    else
         grade='E';
    return grade;

}
main()
{
    char gr,pgr;
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
    gr=calgrade(per);
    pgr=calgrade(p);
    
    printf("Total is = %f",tot);
    printf("\nPercentage is =%f",per);
     printf("\n Pysics GRADE IS : %c",pgr);
     printf("\n Chemistry GRADE IS : %c",calgrade(c));
     printf("\n Maths GRADE IS : %c",calgrade(m));
     printf("\n English GRADE IS : %c",calgrade(eng));
     printf("\n Computer GRADE IS : %c",calgrade(co));
     
     
    printf("\n GRADE IS : %c",gr);
    return 0;
}        
    




    
    
    
