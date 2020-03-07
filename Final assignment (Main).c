#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct node
{
    int data;
    node *next;

};
node *head = NULL;
struct node *start = NULL;
void insert();
int main()
{
    while (menu()!=6);


    return 0;
}
int menu()
{
    int op,value;
    printf("Select Linked List Operation\n");
    printf("1. Insert\n");

    printf("2. Delete\n");
    printf("3. Update\n");
    printf("4. Search\n");
    printf("5. Display\n");
    printf("6. Close\n");
    printf("Input operation: ");
    scanf("%d", &op);
    if(op==1)
    {
        insert();

    }
    else if(op==2)
    {
        delete();
    }
    else if(op==3)
    {
        update();
    }
    else if(op==4)
    {
        search();
    }
    else if(op==5)
    {
        display();
    }
    else if(op==6)
    {
        close();
        return op;
    }
    else
    {
        printf("Invalid Operation Try Again\n");
    }


}
void insert()
{
    int op;
    int value;
    printf("Select Insert List Operation\n");
    printf("1. Pushfront()\n");
    printf("2. Pushback()\n");
    printf("3. Pushafter()\n");
    printf("4. Pushat()\n");
    printf("5. Close\n");
    printf("Input operation: ");
    scanf("%d", &op);
    if(op==1)
    {
    printf("pushfront operation\n");

    }
    else if(op==2)
    {
        printf("pushback operation\n");

    }
    else if(op==3)
    {
        printf("pushafter operation\n");
    }
    else if(op==4)
    {
        printf("pushat operation===\n");
    }
    else if(op==5)
    {
        printf("Operation Closed\n");
        return op;
    }
    else
    {
        printf("Invalid Operation Try Again\n");
    }


}
int delete()
{
    int op;
    printf("Select Insert List Operation\n");
    printf("1. Delete\n");
    printf("Input operation: ");
    scanf("%d", &op);
    if(op==1)
    {
        printf("Pop\n");

    }
    else
    {
        printf("Invalid Operation Try Again\n");
    }


}
int update()
{
    int op;
    printf("Select Insert List Operation\n");
    printf("1. Update\n");
    printf("Input operation: ");
    scanf("%d", &op);
    if(op==1)
    {
        printf("Updated\n");

    }
    else
    {
        printf("Invalid Operation Try Again\n");
    }


}
int search()
{
    int op;
    printf("Select Insert List Operation\n");
    printf("1. Search\n");
    printf("Input operation: ");
    scanf("%d", &op);
    if(op==1)
    {
        printf("Found\n");

    }
    else
    {
        printf("Not Found\n");
    }


}
int close()
{
    int op;
    printf("Select Insert List Operation\n");
    printf("Input operation: ");
    scanf("%d", &op);
    if(op==1)
    {
        printf("File Closed");

    }
    else
    {
        printf("Invalid Operation Try Again\n");
    }


void insert()
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space\n");
                return;
        }
        printf("\nPush at beginning :\t" );
        scanf("%d",&temp->data);
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
void display()
{
        node*next;
        int data;
        struct node *ptr;
        if(start==NULL)
        {
                printf("\nList is empty:\n");
                return;
        }
        else
        {
                ptr=start;
                printf("\nThe List elements are:\n");
                while(ptr!=NULL)
                {
                        printf("%d\t",ptr->data);
                        ptr=ptr->next;
                }

}
}


