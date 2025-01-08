#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Define the maximum size of the stack

int stack[MAX];
int top = -1; // Initialize top to -1, indicating an empty stack

// Function to push an element onto the stack
void push(int data) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d onto the stack.\n", data);
        return;
    }
    top++;
    stack[top] = data;
    printf("%d pushed onto the stack.\n", data);
}

// Function to pop an element from the stack
void pop() { 
    if (top == -1) {
        printf("Stack Underflow! Cannot pop from an empty stack.\n");
        return;
    }
    printf("%d popped from the stack.\n", stack[top]);
    top--;
}

// Function to display the stack
void display() {
    if (top == -1) {
        printf("The stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
int main() {
    int choice, value,cont=1;

    while (cont) {
        printf("\nStack Menu\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to be pushed: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
            printf("\nyou want to continue- (enter 1 for YES and 0 for NO!");
             scanf("%d",&cont);
    }

    return 0;
}
