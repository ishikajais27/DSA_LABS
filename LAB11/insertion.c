#include<stdio.h>

void insertion(int n,int a[n]){
    int temp;
    fro(int i=1;i<n-1;i++){
        temp=a[i];
        int j=i-1;
        while(j>=0&& a[j]>temp){
            if(a[j]>a[j+1]){
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=temp;
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
insertion(n,arr);
}