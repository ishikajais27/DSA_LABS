#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};
struct node *create(int data) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

struct node* insert(struct node *root, int data) {
    if(root == NULL) {
        return create(data);
    }
    if(data < root->data) {
        root->left = insert(root->left, data);
    }
    else if(data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

void inorder(struct node* root) {
    if(root != NULL) {               
        inorder(root->left);
        printf(" %d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct node* root) {
    if(root != NULL) {               
        printf(" %d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node* root) {
    if(root != NULL) {               
        postorder(root->left);
        postorder(root->right);
        printf(" %d ", root->data);
    }
}

struct node* search(struct node* root, int target) {
    if(root == NULL || root->data == target) {
        return root;
    }
    if(target < root->data) {
        return search(root->left, target);    
    }
    return search(root->right, target);
}

int main() {                        
    int n, choice;
    int data;
    int target;
    struct node* p;
    struct node *root = NULL;
    
    printf("Enter the number of nodes- ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &data);
        root = insert(root, data);
    }
    
                               
        printf("\nMAIN MENU\n");
        printf("1. Preorder\n2. Postorder\n3. Inorder\n4. Search\n5. Exit\n");
                  printf("Enter option- ");
        scanf("%d", &choice);
      while(choice!=5){
        switch(choice) {
            case 1:
                printf("Preorder: ");
                preorder(root);
                printf("\n");
                break;
            case 2:
                printf("Postorder: ");
                postorder(root);
                printf("\n");
                break;
            case 3:
                printf("Inorder: ");
                inorder(root);
                printf("\n");
                break;
            case 4:
                printf("Enter the element you want to search- ");
                scanf("%d", &target);
                p = search(root, target);
                if(p != NULL) {
                    printf("Element %d found in the tree\n", target);
                } else {
                    printf("Element not found!\n");
                }
                break;
            case 5:
                printf("Exiting program\n");
                break;
            default:
                printf("Invalid option! Please try again.\n");
    }
      } 
}