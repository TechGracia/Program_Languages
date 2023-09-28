#include<stdio.h>
#include<stdlib.h>
struct node
{
    int num;
    struct node*link;
};
 // function display
void display(struct node*list1)
{
    struct node *temp;
    temp=list1;
    while(temp!=NULL)
    {
        printf("\n %d",temp->num);
        temp=temp->link;
    }
}
void push(struct node **y)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n ENTER NUMBER TO INSERT AT THE BEGINNING :");
    scanf("%d",&temp->num);
    temp->link=NULL;
    if(*y!=NULL)
    temp->link=*y;
    *y=temp;    
}
void pop(struct node **y)
{
    struct node*temp;
    if(*y!=NULL)
    {
        temp=*y;
        *y=(*y)->link;
        printf("\n DATA DELETED %d", temp->num);
        free(temp);
    }
    else
    printf("\n STACK IS EMPTY");
}
int main()
{
    int ch;
    struct node *top=NULL;
    do
    {
    printf("\n 1...... PUSH ELEMENT TO THE LIST");
    printf("\n 2...... POP ELEMENT OUT OF THE LIST");
    printf("\n 3...... DISPLAY LIST ");    
    printf("\n 4...... QUIT PROGRAM");
    printf("\n ENTER YOUR CHOICE :");
    scanf("%d",&ch);
    switch(ch)
        {
        case 1: push(&top);
                break;
        case 2: pop(&top);
                break;
        case 3: display(top);
                break;
        case 4:printf("Exiting the program.\n");
                break;
        default:printf("Invalid choice. Please enter a valid option.\n");
        }
    }
    while(ch!=4);
    free(top);
}
 


