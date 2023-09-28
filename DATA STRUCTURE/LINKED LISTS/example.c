#include<stdio.h>
#include<stdlib.h>
struct node
{
    int num;
    struct node*link;
};
int main()
{
    struct node *first, *temp, *last;
    int n,i;
    printf("ENTER NUMBER OF LIST :");
    scanf("%d",&n);
    first=(struct node*)malloc(sizeof(struct node));
    printf("\n ENTER NUMBER :");
    scanf("%d",&first->num);
    first->link=NULL;
    last=first;
    for(i=1; i<n; i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("\n ENTER NUMBER :");
        scanf("%d",&temp->num);
        temp->link=NULL;
        if(last!=NULL)
        last->link=temp;
        last=temp;        
    }
    temp=first;
    while(temp!=NULL)
    {
        printf("%5d",temp->num);
        temp=temp->link;
    }
    free(first);
    free(temp);
    free(last);
}