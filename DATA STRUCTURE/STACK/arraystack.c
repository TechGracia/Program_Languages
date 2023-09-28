#include<stdio.h>
#include<stdlib.h>
void push(int arr[],int *top, int n, int val);
int pop(int arr[],int*top);
void display(int arr[],int*top);
int main()
{
    int arr[20],val=0,n=0,ch=0,top=1;
    printf("Enter the size of stack:\n");
    scanf("%d",&n);
    do
    {
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("\n Enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter value to be inserted into the stack:\n");
            scanf("%d",&val);
            push(arr,&top,n,val);
            break;
            case 2:val=pop(arr,&top);
            if(val==-1)
            printf("The stock is empty\n");
            else
            printf("The value popped is :%d\n",val);
            break;
            case 3:display(arr,&top);
            break;
        }
    }
    while(ch!=0);
    return 0;
}
void push(int arr[],int *top, int n, int val)
{
    if(*top<n)
    {
        *top=*top+1;
        arr[*top]=val;
    }
    else
    printf("Stack is full \n");
}
int pop(int arr[],int*top)
{
    int val=0;
    if(*top>=0)
    {
        val= arr[*top];
        *top=*top-1;
        return val;
    }
    else
    return -1;
}
void display(int arr[],int*top)
{
    int i=0;
    printf("\n The stack is:");
    for(i=*top; i>=0; i--)
    printf("%d\n",arr[i]);
}