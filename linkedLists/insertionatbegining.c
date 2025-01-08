#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void createNode(struct node *head, struct node *temp, struct node *newnode)
{
    int choice = 1;
    head = NULL;
    // temp = NULL;
    newnode = NULL;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data- ");
        scanf("%d", &newnode->data);
        if (head == NULL)
        {
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("You want to continue? (0 for 'NO' and 1 for 'YES')");
        scanf("%d", &choice);
    }
    struct node *newnode1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter data of new node- ");
    scanf("%d", &newnode1->data);
    newnode1->next = head;
    head = newnode1;
    temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
int main()
{
    struct node *head, *temp, *newnode;
    createNode(head, temp, newnode);
}
