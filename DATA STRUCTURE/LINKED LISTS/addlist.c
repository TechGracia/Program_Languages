#include<stdio.h>
#include<stdlib.h>
struct node
{
    int num;
    struct node *link; //self referential structure
};

struct node *createlist(int n)
{
    struct node *first,*temp,*last;
    int i;
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
    return first;
}
// function to display all nodes
void display(struct node *list1)
{
    struct node *temp;
    temp=list1;
    while(temp!=NULL)
    {
        printf("%5d",temp->num);
        temp=temp->link;
    }
}
void addBegin(struct node **y)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n ENTER NUMBER TO INSERT AT THE BEGINNING :");
    scanf("%d",&temp->num);
    temp->link=NULL;
    temp->link=*y;
    *y=temp;
}
void addEnd(struct node **y)
{
    struct node *temp,*t;
    if(*y==NULL)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("\n ENTER NUMBER TO INSERT AT THE END :");
        scanf("%d",&temp->num);
        temp->link=NULL;
        temp->link=*y;
        *y=temp;
    }
    else
    {
        temp=*y;
        while(temp->link!=NULL)   //move to last node
        temp=temp->link;
        // create a dynamic node
        t=(struct node*)malloc(sizeof(struct node));
        printf("\n ENTER NUMBER TO INSERT AT THE END :");
        scanf("%d",&t->num);
        t->link=NULL;
        temp->link=t;
    }
}
int main()
{
    int n, ch;
    struct node *list1=NULL;
    do
    {
        printf("\n 1...... CREATE A LINKED LIST");
        printf("\n 2...... DISPLAY LINKED LIST");
        printf("\n 3...... ADD NUMBERS AT THE BEGINNING OF THE LIST ");
        printf("\n 4...... ADD NUMBERS AT THE END OF THE LIST");
        printf("\n 5...... QUIT PROGRAM");
        printf("\n ENTER YOUR CHOICE :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("ENTER NO. OF LIST");
                    scanf("%d",&n);
                    list1=createlist(n);
                    break;
            case 2: display(list1);
                    break;
            case 3: addBegin(&list1);
                    break;
            case 4: addEnd(&list1);
                    break;
        }   
   }
   while(ch!=0);
   free(list1);
}
