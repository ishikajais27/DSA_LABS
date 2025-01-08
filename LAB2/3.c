#include<stdio.h>

int nonZero(int n,int m,int arr[n][m]){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]!=0){
                count++;
            }
        }
    }
    return count;
}

void display(int c,int sparse[c][3]){
    for(int i=0;i<=c;i++){
        for(int j=0;j<3;j++){
            printf(" %d ",sparse[i][j]);
        }
        printf("\n");
    }
}

void sparse(int n,int m,int arr[n][m]){
    int index=0;
    int count=nonZero(n,m,arr);
    int sparse[count][3];
    sparse[index][0]=n;
    sparse[index][1]=m;
    sparse[index][2]=count;
    index++;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=0){
                sparse[index][0]=i;
                sparse[index][1]=j;
                sparse[index][2]=arr[i][j];
                index++;
            
            }
        }
    }
    display(count,sparse);
}

int main(){
    int n,m;
    printf("enter the size of the sparse matrix- ");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("enter the elements of the sparse matrix- ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    sparse(n,m,arr);
}