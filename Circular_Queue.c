#include <stdio.h>  
#include <stdlib.h>
  
# define max 6  
int queue[max];  
int front=-1;  
int rear=-1;  
 
int main()  
{  
    int choice=1,x;   
      
    while(choice<4 && choice!=0)   
    {  
    printf(" 1. Insert an element\n");  
    printf(" 2. Delete an element\n");  
    printf(" 3. Display the element\n");  
    printf(" 4. Exit \n");
    printf("\n Enter your choice: ");  
    scanf("%d", &choice);  
      
    switch(choice)  
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
            exit(0);
        default:
            printf("You Inserted Wrong Number \n");
  
    }}  
    return 0;  
}  
void enqueue(int element)  
{  
    if(front==-1 && rear==-1)   
    {  
        front=0;  
        rear=0;  
        queue[rear]=element;  
    }  
    else if((rear+1)%max==front)    
    {  
        printf("Queue is Full !!! \n");  
    }  
    else  
    {  
        rear=(rear+1)%max;     
        queue[rear]=element;     
    }  
}  
  

void dequeue()  
{  
    if((front==-1) && (rear==-1))  
    {  
        printf("\nQueue is Empty !!! \n");  
    }  
 else if(front==rear)  
{  
   printf("\nThe Deleted  element  is: %d\n", queue[front]);  
   front=-1;  
   rear=-1;  
}   
else  
{  
    printf("\nThe Deleted element is: %d\n", queue[front]);  
   front=(front+1)%max;  
}  
}  

void display()  
{  
    int i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is Empty!!!\n");  
    }  
    else  
    {  
        printf("\nElements in a Queue are :");  
        while(i<=rear)  
        {  
            printf("%d,", queue[i]);  
            i=(i+1)%max;  
        }  
    }  
}  
