#include<stdio.h>
#include<stdlib.h>
struct node
{
    int num;
    struct node * link;     //self referential structure 
};
struct node *front=NULL,*rear=NULL;
//function display all nodes of linked list
void display()
{
struct node *t;
t=front;
while(t!=NULL)
{
    printf("%5d",t->num);
    t=t->link;
}

}
void insertQ()
{
    struct node *temp;
   
    temp=(struct node *) malloc(sizeof(struct node));
    printf("\n Enter Number to insert in the begining");
    scanf("%d",&temp->num);
    temp->link=NULL;
 if(front==NULL && rear ==NULL)
     front=rear=temp;
 else
 {
   rear->link=temp;  //connect
 rear=temp;
 }
 }
void deleteQ()
{
     struct node *temp;

    if(front == NULL)
         printf("Queue is Empty.\n");
    else
    {
        temp = front;
        front = front->link;
        //if front == NULL, set rear = NULL
        if(front == NULL)
            rear = NULL;
         printf("\n Number deleted %d",temp->num);
         free(temp);
    }
   
}
int main()
{
    int ch;
struct node front,rear;
do
{
printf("\n 0.......Quit Program");
printf("\n 1.......Insert an element on to a Queue");
printf("\n 2.......Delete an element from the Queue");
printf("\n 3.......Display");
printf("\n Enter your choice");
scanf("%d",&ch);
switch(ch)
{
    case 1: insertQ();
 break;
    case 2: deleteQ();
            break;
    case 3: 
            display();
            break;
   }
}
while(ch!=0);

}