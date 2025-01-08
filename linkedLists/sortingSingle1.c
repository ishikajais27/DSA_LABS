#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
int main(){
   int n;
   struct node *head, *temp;
   head=NULL;temp=NULL;
   printf("enter the size of the list- ");
   scanf("%d",&n);
   for(int i=0;i<n;i++){
    struct node* newnode;
    newnode= (struct node*) malloc(sizeof(struct node));
    printf("enter data- ");
    scanf("%d",&newnode->data);
    if(head==NULL){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
   }
   printf("the list- ");
   struct node* current;
   current=head;
    for(int i=0;i<n;i++){
        printf(" %d -> %d \n ",current->data,current->next);
        current=current->next;
    }
//Now reverse->
struct node *temp1, *temp2;
temp=head;
temp1=NULL; temp2=NULL; 
for(int j=0;j<n;j++){
     if(j==0){
      temp1=temp->next;//temp1=200, 100->next=NULL, temp2=100
      temp->next=NULL;
      temp2=temp;
     }
     else if(j<n-1){
       temp= temp1;// temp=200,temp1=300, 200->next= 100, temp2=200; temp=300,temp1=400, 300->next= 200, temp2=300
       temp1=temp->next;
       temp->next=temp2;
       temp2=temp;
     }
else if(j==n-1){
          temp=temp1; //temp=400, 400->next=300,head= 400   
          temp->next=temp2;
          head=temp;
     }
}
   current=head;
    for(int i=0;i<n;i++){
       printf("\n %d -> %d  ",current->data,current->next);
        current=current->next;
    }

}