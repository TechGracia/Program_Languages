#include<stdio.h>
#include<stdlib.h>
struct student
{
    int roll,p,c,m,tot,per;
    char name[50];
    struct student *link;
};
void main()
{
    struct student *list1,*list2,*list3;
    int i,n;
    list1=(struct student*)malloc(sizeof(struct student));
     printf("ENTER limit :");
    scanf("%d", &n);
   
    printf("ENTER ROLL NO :");
    scanf("%d", &list1->roll);
    printf("ENTER NAME :");
    scanf("%s",list1->name);
    printf("ENTER PHYSICS MARKS :");
    scanf("%d",&list1->p);
    printf("ENTER CHEMISTRY MARKS :");
    scanf("%d",&list1->c);
    printf("ENTER MATHS MARKS :");
    scanf("%d",&list1->m);
    list1->tot=list1->p+list1->c+list1->m;
    list1->per=(list1->tot*100)/300;
    list1->link=NULL;
    list3=list1;
    for(i=1; i<n; i++)
    {
        list2=(struct student*)malloc(sizeof(struct student));
        printf("ENTER ROLL NO :");
        scanf("%d", &list2->roll);
        printf("ENTER NAME :");
        scanf("%s",list2->name);
        printf("ENTER PHYSICS MARKS :");
        scanf("%d",&list2->p);
        printf("ENTER CHEMISTRY MARKS :");
        scanf("%d",&list2->c);
        printf("ENTER MATHS MARKS :");
        scanf("%d",&list2->m);
        list2->tot=list2->p+list2->c+list2->m;
        list2->per=(list2->tot*100)/300;
        list2->link=NULL;
        if(list3!=NULL)
        list3->link=list2; //connecting nodr
        list3=list2; //list3 is pointing to list2
    }
    list2=list1;  //list2 is pointing to list1
    while(list2!=NULL)
    {
    printf("\n ROLL NO : %d",list2->roll); 
    printf("\n NAME IS : %s",list2->name);
    printf("\n PHYSICS MARKS IS : %d",list2->p);
    printf("\n CHEMISTRY MARKS IS : %d",list2->c);
    printf("\n MATHS MARKS IS : %d",list2->m);
    printf("\n TOTAL MARKS IS :%d",list2->tot);
    printf("\n PERCENTAGE IS :%d",list2->per);
    list2=list2->link;
    }
    free(list1);
    free(list2);
    free(list3);
    
}