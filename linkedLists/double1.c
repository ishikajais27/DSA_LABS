#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
int main(){
    int n;
    printf("enter the size of list- ");
    scanf("%d",&n);
    struct node *head,*temp,*newnode,*temp1;
    head=NULL;temp=NULL;temp1=NULL;
        int choice = 1;

    while (choice) {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter the data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if (head == NULL) {
            head = temp = newnode;
            newnode->prev=NULL;

        } 
        else {
            temp->next = newnode;
            newnode->prev=temp;
            temp = newnode;
        }
        printf("You want to continue? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);
    }
        temp=head;
    while(temp!=NULL){
        printf("\n%d -> %d -> %d",temp->prev,temp->data,temp->next);
        temp= temp->next;
    }
}