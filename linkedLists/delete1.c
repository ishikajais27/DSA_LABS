#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void createList(struct node *head,struct node *temp){
  int choice=1;
  head=NULL;temp=NULL;
 while(choice){
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    printf("Enter data- ");
    scanf("%d",&newNode->data);
    if(head==NULL){
        head=newNode;
        temp=newNode;
    }
    else{
        temp->next= newNode;
        temp=newNode;
    }
    printf("You want to continue?? (enter 1 for continue and 0 for stop)");
    scanf("%d",&choice);
 }
     struct node *newNode1= (struct node*) malloc(sizeof(struct node));
    newNode1= head;
    head= head->next;
    free(newNode1);
      struct node *current = head;
    printf("Linked list contents:\n");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
}

int main(){
    struct node *head,*temp;
    createList(head,temp);
 
}