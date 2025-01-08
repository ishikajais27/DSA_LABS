#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
int main() {
	struct node *head,*temp,*newnode;
	temp=NULL;
	int choice=1;
	while(choice) {
		newnode=(struct node*) malloc(sizeof(struct node));
		printf("enter data- ");
		scanf("%d",&newnode->data);
		if(head==NULL) {
			head=temp=newnode;
		}
		else {
			temp->next=newnode;
			temp=newnode;
		}
		printf("you wnat to continue??");
		scanf("%d",&choice);
	}
	struct node *current;
	current= head;
	printf("Linked list contents:\n");
	while (current != NULL)
	{
		printf("%d\n ", current->data);
		current = current->next;
	}
	int length=0;
	struct node *temp2;
	temp2=head;
	while(temp2!=NULL) {
		length++;
		temp2=temp2->next;
	}
	printf("length of the linked list- %d",length);

}