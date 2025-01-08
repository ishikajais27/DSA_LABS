//Write a program to sort array of elements in ascending and descending order by selection sort using function.
#include<stdio.h>

void selection(int n,int a[n]){
    int min,temp;
    for(int i=0;i<n-1;i++){
            min=i;
     for(int j=i+1;j<n;j++){
        if(a[j]<a[min]){
            min=j;
        }
     }
     if(min!=i){
       temp=a[i];
       a[i]=a[min];
       a[min]=temp;
     }
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
    selection(n,arr);
}