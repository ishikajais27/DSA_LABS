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
        int choice = 0;

    while (choice<n) {
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
        choice++;
    }
    int p;
    printf("\nenter the position where you wnat to insert the node- ");
    scanf("%d",&p);
    struct node *insertnode;
    temp1=NULL;
    temp=head;
    insertnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter data- ");
    scanf("%d",&insertnode->data);
    for(int i=1;i<=p;i++){
        if(i==p-1){
    insertnode->prev=temp;
    insertnode->next=temp->next;
    temp->next=insertnode;
    (insertnode->next)->prev=insertnode;  
    }      
    else{
       temp=temp->next;
    }
    }
    struct node* current;
    current=head;
    for(int j=0;j<n;j++){
         printf("\n%d -> %d -> %d",current->prev,current->data,current->next);
         current= current->next;
    }

}