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
//INSERTION- 
void insert(struct node* head,int n){
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

int main(){
    struct node* head;
    head=NULL;
    int n;
    printf("enter the size of the list- ");
    scanf("%d",&n);
    display(head,n);
    insert(head,n);
}