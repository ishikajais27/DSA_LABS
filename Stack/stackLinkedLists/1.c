#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}; 
    struct node* top;
    top=0;
push(int x){
   struct node* newnode;
   newnode = (struct node*) malloc(sizeof(struct node));
   top=newnode;
   newnode->data=x;
   newnode->next=top;
   top=newnode;
}
display(){
    printf("%d",top->data);
    top=top->next;
}
int main(){
    int n;
    printf("enter the size of list- ");
    scanf("%d",&n);
    push(2);
    push(3);
    push(10);
    display();
    // peek();
    // pop();
    // peek();
    // display();
}