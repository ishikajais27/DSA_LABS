// Write a program to perform the following operations on a given square matrix using functions:
//i. Find the no.of nonzero elements
//ii. Displayuppertriangularmatrix
//iii.Displaytheelementsof justaboveandbelowthemaindiagonal
#include<stdio.h>

void nonZero(int n,int arr[n][n]){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=0){
                count++;
            }
            else{
                continue;
            }
        }
    }
     printf("\nNonzero elements in the array- %d",count);
}

void upperTraingular(int n,int arr[n][n]){
    printf(" Upper triangular matrix- \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          if(i>j){
            printf("  ");
          }
          else if(i<=j){
            printf("%d ",arr[i][j]);
          }
        }
        printf("\n");
    }
}

void mainDiagonal(int n,int arr[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                printf("%d ",arr[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
int main(){
     int n;
    printf("enter the size of the square matrix- ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the lements of the array- ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    nonZero(n,arr);
    upperTraingular(n,arr);
    mainDiagonal(n,arr);
}