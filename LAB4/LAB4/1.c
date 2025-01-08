//Write a program to create a single linked list of n nodes and perform the following menu
// based operations on it using function:
//i. Insert a node at specific position
//ii. Deletion of an element from specific position
//iii. Count nodes iv. Traverse the linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
int main(){
    struct node* head;
    struct node* temp;
    struct node* newnode;
    int choice=1;
    while(choice){
        head=NULL;temp=NULL;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data- ");
        scanf("%d",&newnode->data);
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("You want to continue(1 for YES and 0 for NO)??");
        scanf("%d",&choice);
    }
    printf("Entered data- ");
    temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
   
}