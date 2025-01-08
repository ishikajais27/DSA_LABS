#include<stdio.h>
int top=-1;
int N=5;
int stack[5];
void push(){
    int add;
    printf("Enter the element you want to add- ");
    scanf("%d",&add);
    if(top==N-1){
        printf("Overflow condition!");
    }
    else{
         top++;
        stack[top]=add;
        printf("%d",stack[top]);
    }
}
int main(){
    push();
}