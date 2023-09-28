#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Structure for the queue
struct Queue 
{
    int data[MAX_SIZE];
    int front, rear;
};

// Function to initialize the queue
void initializeQueue(struct Queue *queue) 
{
    queue->front = -1;
    queue->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(struct Queue *queue) 
{
    return (queue->front == -1);
}

// Function to check if the queue is full
int isFull(struct Queue *queue) 
{
    return (queue->rear == MAX_SIZE - 1);
}

// Function to enqueue an element
void enqueue(struct Queue *queue, int element) 
{
    if (isFull(queue)) 
    {
        printf("Queue is full, cannot enqueue.\n");
        return;
    }
    
    if (isEmpty(queue)) 
    {
        queue->front = 0;
    }
    queue->rear++;
    queue->data[queue->rear] = element;
    printf("Element %d enqueued successfully.\n", element);
}

// Function to dequeue an element
void dequeue(struct Queue *queue) 
{
    if (isEmpty(queue)) {
        printf("Queue is empty, cannot dequeue.\n");
        return;
    }
    
    int removed = queue->data[queue->front];
    if (queue->front == queue->rear) 
    {
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front++;
    }
    printf("Element %d dequeued successfully.\n", removed);
}

// Function to display the contents of the queue
void displayQueue(struct Queue *queue) 
{
    if (isEmpty(queue))
     {
        printf("Queue is empty.\n");
        return;
    }
    
    printf("Queue contents: ");
    for (int i = queue->front; i <= queue->rear; i++) 
    {
        printf("%d ", queue->data[i]);
    }
    printf("\n");
}

// Function to search for an element in the queue
void searchQueue(struct Queue *queue, int element) 
{
    if (isEmpty(queue)) 
    {
        printf("Queue is empty, cannot search.\n");
        return;
    }
    
    for (int i = queue->front; i <= queue->rear; i++) 
    {
        if (queue->data[i] == element) 
        {
            printf("Element %d found in the queue.\n", element);
            return;
        }
    }
    printf("Element %d not found in the queue.\n", element);
}

int main() 
{
    struct Queue queue;
    initializeQueue(&queue);
    int choice, element;

    do 
    {
        printf("\nMenu:\n");
        printf("1. Enqueue an element\n");
        printf("2. Dequeue an element\n");
        printf("3. Display the queue\n");
        printf("4. Search for an element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &element);
                enqueue(&queue, element);
                break;
            case 2:
                dequeue(&queue);
                break;
            case 3:
                displayQueue(&queue);
                break;
            case 4:
                printf("Enter the element to search: ");
                scanf("%d", &element);
                searchQueue(&queue, element);
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }
     while (choice != 5);

    return 0;
}
