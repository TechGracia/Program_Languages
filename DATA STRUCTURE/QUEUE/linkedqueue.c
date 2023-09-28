#include<stdio.h>
#include<stdlib.h>
void enqueue(int arr[],int*top,int n,int val);
int dequeue(int arr[],int *top);
void display(int arr[],int *top);
int main()
{
    int arr[20],val,n,ch,top=-1;
    printf("ENTER THE SIZE OF QUEUE :");
    scanf("%d",&n);
    do
    {
        printf("\n 1...... ENTER ELEMENT TO THE QUEUE");
        printf("\n 2...... DELETE ELEMENT OUT OF THE QUEUE");
        printf("\n 3...... DISPLAY LIST ");    
        printf("\n 4...... QUIT PROGRAM");
        printf("\n ENTER YOUR CHOICE :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("ENTER VALUE TO BE INSERTED INTO THE QUEUE :");
                    scanf("%d",&val);
                    enqueue(arr,&top,n,val);
                    break;
            case 2: val=dequeue(arr,&top);
                    if(val==-1)
                    printf("THE QUEUE IS EMPTY \n");
                    else
                    printf("THE VALUE POPPED IS :%d",val);
                    break;
            case 3: display(arr,&top);
                    break;
            case 4:printf("Exiting the program.\n");
                    break;
            default:printf("Invalid choice. Please enter a valid option.\n");
        }        
    }
    while(ch!=4);
    return 0;
}
void enqueue(int arr[],int *top, int n, int val)
{
    if(*top<n)
    {
        *top=*top+1;
        arr[*top]=val;
    }
    else
    printf("QUEUE IS FULL \n");
}
int dequeue(int arr[],int *top)
{
    int val;
    if(*top>=0)
    {
        val=arr[*top];
        *top=*top-1;
        return val;
    }
    else
    return -1;
}
void display(int arr[],int *top)
{
    int i;
    printf("\n THE QUEUE IS : \n");
    for(i=*top; i>=0; i--)
    printf("%d\n",arr[i]);
}