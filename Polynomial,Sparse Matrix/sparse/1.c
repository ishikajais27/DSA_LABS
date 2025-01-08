//implementation using array->
#include<stdio.h>
int countNonzero(int arr[5][5],int m,int n){
    int nonZero=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=0){
                nonZero++;
            }
        }
    } 
    return nonZero;
}
void tuplet(int a[5][5],int m,int n){
       int index=0;
       int totalNonZero= countNonzero(a,m,n);
       int a1[5][5];
       a1[index][0]=m;
       a1[index][1]=n;
       a1[index][2]=totalNonZero;
       index++;
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        if(a[i][j]!=0){
         a1[index][0]=i;
         a1[index][1]=j;
         a1[index][2]=a[i][j];
         index++;
        }
        }
         
       }
       for(int k=0;k<=totalNonZero;k++){
        for(int p=0;p<3;p++){
            printf(" %d ",a1[k][p]);
        }
         printf("\n");
       }

}
int main(){
    int m,n;
    printf("Enter rows- ");
    scanf("%d",&m);
    printf("enter cols- ");
    scanf("%d",&n);
    int sparse[5][5];
    printf("enter the elements of the sparse matrix- ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&sparse[i][j]);
        }
    }
    printf("\n diplay the sparse matrix- ");
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf(" %d ",sparse[i][j]);
        }
        printf("\n");
    }
    tuplet(sparse,m,n);
}