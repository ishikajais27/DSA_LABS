//quick sort
#include<stdio.h>

int partition(int a[],int lb,int ub){
    int pivot=a[lb];
    int start=lb;
    int end=ub;
    while(end>start){
        while(pivot>=a[start]){
            start++;
        }
        while(pivot<a[end]){
            end--;
        }
        if(start<end){
            int temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    int temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;
    return end;
}

void quickSort(int arr[],int lb,int ub,int n){
    if(lb<ub){
        int loc=partition(arr,lb,ub);
        quickSort(arr,lb,loc-1,n);
        quickSort(arr,loc+1,ub,n);
    }
               for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
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
   int lb=0;
   int ub=n-1;
    quickSort(arr,lb,ub,n);
}