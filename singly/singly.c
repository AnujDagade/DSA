#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE;

void createlist(NODE* head);
void printlist(NODE *head);

int main()
{

    NODE* newnode = malloc(sizeof(NODE));

    createlist(newnode);
    printlist(newnode);

    return 0;
}


void createlist(NODE* head)
{
    int n;
    printf("\nHow many node\n\t->");
    scanf("%d",&n);
   
    NODE *last, *newnode;
    
    last = head;

    for(int i = 0; i < n; i++)
    {
        newnode = (NODE*)malloc(sizeof(NODE));
        newnode->next = NULL;
        printf("Enter data\n\t->");
        scanf("%d",&newnode->data);

        last->next = newnode;
        last = newnode;

        
    }

}

void printlist(NODE *head)
{
    NODE* temp;
    for (temp=head; temp != NULL; temp=temp->next)
    {
        printf("%d\t\n",temp->data);
    }
    
}