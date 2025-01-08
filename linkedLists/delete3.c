#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
            struct node *head,*temp,*newnode;
        head=NULL;temp=NULL;
    int choice=1;
    while(choice){
        newnode=(struct node*) malloc(sizeof(struct node));
        printf("enter data- ");
        scanf("%d",&newnode->data);
        if(head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("you wnat to continue??");
        scanf("%d",&choice);
    }
    struct node *delete,*temp2;
    delete= NULL;temp2=head;
    int p,i=1;
    printf("enter the position where you want to delete the node- ");
    scanf("%d",&p);
    while(i!=p){
        i++;
        temp2=temp2->next;
    }
delete= temp2->next;
temp2->next=delete->next;
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