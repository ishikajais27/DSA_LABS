#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void display(struct node* head,int n){
    struct node* temp;
    temp=head;
    for(int i=0;i<n;i++){
        printf("\n%d",temp->data);
        temp=temp->next;
    }
}


void insertion(struct node* head,int n){
 int p,i=1;
 printf("enter the position where you want to insert a node- ");
 scanf("%d",&p);
 struct node *insertNode,*temp;
 insertNode=(struct node*)malloc(sizeof(struct node));
printf("enter data- ");
scanf("%d",&insertNode->data);
temp=head;
for(i=1;i<p-1;i++){
    temp=temp->next;
}
insertNode->next=temp->next;
temp->next=insertNode;
display(head,n+1);
}

void deletion(struct node* head,int n){
    int d;
    printf("\nenter the position from where you want to delete the node- ");
    scanf("%d",&d);
    struct node *temp,*deleteNode;
    deleteNode=(struct node*)malloc(sizeof(struct node));
    temp=head;
    for(int i=2;i<d;i++){
        temp=temp->next;
    }
    deleteNode=temp->next;
    temp->next=deleteNode->next;
    free(deleteNode);
    display(head,n-1);
}
void count(int n){
    printf("Total number of nodes- %d",n);
}
int main(){
    struct node *head,*temp,*newnode;
    head=NULL;temp=NULL;
    int n,i=0;
    printf("\nenter the size of list- ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data- ");
        scanf("%d",&newnode->data);
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
    int option;
    printf("/n enter option- ");
    scanf("%d",&option);
    switch(option){
        case 1: insertion(head,n);
       break;
        case 2:
        deletion(head,n);
        break;
       case 3:
       count(n);
       break;
       case 4:
       display(head,n);
       break;
       default: exit;
    }
}
