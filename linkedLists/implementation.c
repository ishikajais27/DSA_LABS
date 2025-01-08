#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp = NULL, *newnode = NULL;
    int choice = 1;

    while (choice) {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter the data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if (head == NULL) {
            head = temp = newnode;
        } 
        else {
            temp->next = newnode;
            temp = newnode;
        }

        printf("You want to continue? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);
    }
    temp=head;
    while(temp!=NULL){
        printf("\n%d-> %d",temp->data,temp->next);
        temp= temp->next;
    }
}
