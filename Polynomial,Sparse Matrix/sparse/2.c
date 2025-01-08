#include<stdio.h>
#include<stdlib.h>
struct node{
    int row;
    int col;
    int value;
    struct node* next;
};

void display(struct node* head) {
    struct node* temp = head;
    printf("Row\tCol\tValue\n");
    while (temp != NULL) {
        printf("%d\t%d\t%d\n", temp->row, temp->col, temp->value);
        temp = temp->next;
    }
}
int main(){
    int m,n,value,count=0;
    struct node* head=NULL;
    struct node* temp=NULL;
    printf("Enter rows and cols of sparse matrix- ");
    scanf("%d %d",&m,&n);
    printf("enter the value of the sparse matrix- ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&value);
            if(value!=0){
            struct node* newnode=(struct node*)malloc(sizeof(struct node));
            newnode->row=i;
            newnode->col=j;
            newnode->value=value;
            if(head==NULL){
                head=temp=newnode;
            }
            else{
                temp->next=newnode;
                temp=temp->next;
            }
            }
        }
    }
    printf("Sparse matrix representation using linked list:\n");
    display(head);
}