#include<stdio.h>
void push(int stack[5],int top){
    int add;
    printf("Enter the element you want to add- ");
    scanf("%d",&add);
    if(top==5){
        printf("Overflow condition!");
    }
    else{
         top++;
        stack[top]=add;
        printf("%d",stack[top]);
    }
}
void pop(int stack[5],int top){
    if(top==-1){
        printf("Underflow!");
    }
    else{
        int item;
        item= stack[top];
        top--;
    }
}
void peek(int stack[5],int top){
    int item= stack[top];
    if(top==5){
        printf("overflow!");
    }
    else{
        printf("\n%d",item);
    }
}
int main(){
    int stack[5];
    int top=4;
    push(stack,top);
    pop(stack,top);
    peek(stack,top);
}