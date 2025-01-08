//2x^2+5x+8=0
#include<stdio.h>
#include<stdlib.h>
struct node{
    int coff;
    int expo;
    struct node* next;
};
void insert(struct node* head,int c,int e){
    struct node* temp=NULL;
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->coff=c;
    newnode->expo=e;
       if(head==NULL){
                head=temp=newnode;
            }
            else{
                temp->next=newnode;
                temp=temp->next;
            }
}
int main(){
   struct node* head =NULL;
   //4x^3+6x^2+7x+9
   insertion(head,4,3);
   insertion(head,6,2);
   insertion(head,7,1);
   insertion(head,9,0);
}