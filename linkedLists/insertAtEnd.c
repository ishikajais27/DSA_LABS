#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void createNode(struct node *head, struct node *temp)
{
    struct node *newnode;
    int choice = 1;

    head = NULL; 
    temp = NULL;

    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter the data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            (temp)->next = newnode; 
            temp = newnode;        
        }

        printf("You want to continue? (0 for 'NO' and 1 for 'YES'): ");
        scanf("%d", &choice);
    }
    struct node *newnode1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for the new node: ");
    scanf("%d", &newnode1->data);
    newnode1->next = NULL; 
    if (temp != NULL)
    {
        (temp)->next = newnode1;
    }
    else
    {
        head = newnode1;
    }
    struct node *current;
    current = head;
    printf("Linked list contents:\n");
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
}

int main()
{
    struct node *head, *temp;

    createNode(head, temp);
}
