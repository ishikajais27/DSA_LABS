#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void display(struct node* head, int n){
    struct node* temp;
    temp=NULL; 
    int i=0,j=0;
    printf("enter data- ");
    while(i<n){
        struct node* newnode;
        newnode= (struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        if(head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=temp->next;
        }
        i++;
    }
    temp=head;
    while(j<n){
        printf("\n%d",temp->data);
        temp=temp->next;
        j++;
    }
}
void delete(struct node* head,int n){
    struct node* deleteNode= (struct node*)malloc(sizeof(struct node*));
    struct node* temp;
    int d;
    printf("\nenter the positon from where you want to delete the node- ");
    scanf("%d",&d);
    temp=head;
    for(int i=1;i<n;i++){
        if(i==1){
           deleteNode=temp;
           head=temp->next;
           free(deleteNode);
        }
        else if(i==d-1){
           deleteNode= temp->next;
           temp->next=deleteNode->next;
           free(deleteNode);
         }
         else{
            temp=temp->next;
         }
    }
    display(head,n-1);
   
}
int main(){
    int n;
    printf("enter the size of the list- ");
    scanf("%d",&n);
    struct node* head;
    head=NULL;
    display(head,n);
     delete(head,n);
}