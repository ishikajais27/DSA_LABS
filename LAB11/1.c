//Write a program to sort array of elements in ascending and descending order by insertion.
#include<stdio.h>

void ascending(int n,int a[n]){
    int flag,temp;
    for(int i=0;i<n-1;i++){
         flag=0;
         for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
              flag=1;
            }
         }
         if(flag==0){
            break;
         }
    }
        for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    
}
void descending(int n,int a[n]){
    int flag,temp;
    for(int i=0;i<n-1;i++){
         flag=0;
         for(int j=0;j<n-1-i;j++){
            if(a[j+1]>a[j]){
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
              flag=1;
            }
         }
         if(flag==0){
            break;
         }
    }
          for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    
}

int main(){
    int n;
    printf("enter size of an array- ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of an array- ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    ascending(n,arr);
    printf("\n");
    descending(n,arr);
}