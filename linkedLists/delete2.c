#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    int choice=1;
        struct node *head, *temp;
    head=NULL;temp=NULL;
  while(choice){
    struct node *newnode= (struct node*) malloc(sizeof(struct node));
    printf("enter data- ");
    scanf("%d",&newnode->data);
    if(head==NULL){
        head=temp=newnode;
    }
    else{
      temp->next=newnode;
      temp= newnode;
    }
    printf("You want to continue?");
    scanf("%d",&choice);
  }
      struct node *delete;
    delete= temp;
    struct node *prevnode;
    prevnode= (struct node*)malloc(sizeof(struct node));
    prevnode=head;
    while(prevnode->next!=temp){
        prevnode= prevnode->next;
    }
    prevnode->next=NULL;
    free(delete);
  struct node *current;
  current= head;
     printf("Linked list contents:\n");
    while (current != NULL)
    {
        printf("%d\n ", current->data);
        current = current->next;
    }

}