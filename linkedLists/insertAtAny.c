#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head, *temp, *newnode;
    head = NULL;
    temp = NULL;
    int choice = 1;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data- ");
        scanf("%d", &newnode->data);
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("you want to continue?");
        scanf("%d", &choice);
    }
    int p, i = 1;
    printf("Enter the position where you want to insert node- ");
    scanf("%d", &p);
    temp = head;
    while (i < p)
    {
        temp = temp->next;
        i++;
    }
    struct node *newnode1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter data- ");
    scanf("%d", &newnode1->data);
    newnode1->next = temp->next;
    temp->next = newnode1;
    struct node *current;
    current = head;
    printf("Linked list contents:\n");
    while (current != NULL)
    {
        printf("%d\n ", current->data);
        current = current->next;
    }
}