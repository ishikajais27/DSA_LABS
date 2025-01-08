#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the size- ");
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
      for(int i=0;i<n;i++){
        printf("\n %d",*(p+i));
    }
}