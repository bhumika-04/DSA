#include<stdlib.h>
#include <stdio.h>
     

void display();
void insert_begin();
void insert_end();

 
 
struct node
{
        int info;
        struct node *next;
};
struct node *start=NULL;
int main()     
{
        int choice;
        while(1){
               
                printf("\n****** MENU ******\n");
                printf("\n 1.Insert at the Begning    \n");
                printf("\n 2.Insert at the End    \n");
                printf("\n 3. Display        \n");
                printf("\n 4.Exit    \n");
                printf("Enter your choice:");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        insert_begin();
                                        break;
                        case 2:
                                       insert_end();
                                        break;
                        case 3: 
                                        display();
                                        break;
                        case 4:
                                        exit(0);
                                        break;
                             
                        default:
                                        printf("\n Wrong Choice:\n");
                                        break;
                       
                }
        }  
        return 0;    
}
void insert_begin()
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\n Out of Memory Space:\n");
                return;
        }
        printf("\n Enter the data value for the node:" );
        scanf("%d",&temp->info);
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                temp->next=start;
                start=temp;
        }
}
void insert_end()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\n Out of Memory Space:\n");
                return;
        }
        printf("\n Enter the data value for the node:" );
        scanf("%d",&temp->info );
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next !=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next =temp;
        }
}
void display()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("\n List is empty:\n");
                return;
        }
        else
        {
                ptr=start;
                printf("\n The List elements are:\n");
                while(ptr!=NULL)
                {
                        printf("%d",ptr->info );
                        ptr=ptr->next ;
                }
        }
}