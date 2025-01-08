#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

void display(struct node *head,int i){
    struct node* temp;
    temp= head;
for(int j=0;j<i;j++){
            printf("\n %d",temp->data);
        temp=temp->next;
}
}

void sorting(struct node* head,int n){
   struct node *current,*check,*swap;
    current=head;
        while(current->next!=NULL){
            check=current->next;
            while(check!=NULL){
                if(current->data>check->data){
                    swap->data=current->data;
                    current->data=check->data;
                    check->data=swap->data;
                }
                check=check->next;
            }
            current=current->next;
        }
          display(head,n); 
      }

void createList(struct node* head){
     int choice=1,i=0;
     struct node* temp=NULL;
     while(choice){
        struct node* newNode=(struct node*)malloc(sizeof(struct node));
        if(head==NULL){
            head=temp=newNode;
        }
        else{
            temp->next=newNode;
            temp=temp->next;
        }
        printf("enter the data-> ");
        scanf("%d",&newNode->data);
        printf("\n You want to continue(enter 1 for yes and 0 for No!)- ");
        scanf("%d",&choice);
        i++;
     }
 
     sorting(head,i);
}
    

int main(){
    struct node* head=NULL;
    createList(head);
}