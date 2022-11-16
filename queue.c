#include <stdio.h>
#include <stdlib.h>
#define MAX 50
void enqueue();
void dequeue();
void display();
int queue_array[MAX];
int rear = -1;
int front = -1;
int main()
{
    int choice;
    while (1)
    {
        printf("1.Insert element to Queue \n");
        printf("2.Delete element from Queue \n");
        printf("3.Display all elements of Queue \n");
        printf("4.Exit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            printf("You Insert Wrong Number \n");
        }
    }
}
void enqueue()
{
    int item;
    if (rear == MAX - 1)
        printf("Queue is Full \n");
    else
    {
        if (front == -1)
            front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &item);
        rear = rear + 1;
        queue_array[rear] = item;
    }
}
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is Empty \n");
        return;
    }
    else
    {
        printf(" Deleted Element from queue is : %d \n", queue_array[front]);
        front = front + 1;
    }
}
void display()
{
    int i;
    if (front == -1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}