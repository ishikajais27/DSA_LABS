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
    for(int i=0;i<n;i++){
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
    }
     int d;temp=head;
     printf("enter the positon of node  from where you wnat to delete the node- ");
     scanf("%d",&d);
     for(int j=1;j<=d;j++){
        if(j==d-1){
      struct node* dnode;
      dnode = temp->next;
      (dnode->next)->prev=temp;
        }
        else{
            temp=temp->next;
        }
     }
        temp=head;
for(int i=0;i<n-1;i++){
     printf("\n%d -> %d -> %d",temp->prev,temp->data,temp->next);
        temp= temp->next;
}
}