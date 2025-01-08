#include<stdio.h>
int main(){
    int n1,n2,c=0;
    itn a1[n1][3],a2[n2][3];
    printf("enter the dimennsions of both sparse matrix- ");
    scanf("%d %d",&n1,&n2);
    printf("enter the 1st sparse matrix in tuple form- ");
    for(int i=0;i<n1;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a1[i][j]);
        }
    }
    printf("\n Enter teh elements of 2nd  sparse matrix in tuple form- ");
    for(int i=0;i<n2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a2[i][j]);
        }
    }
    int n=n1>n2?n1:n2;
    for(int i=0;i<n;i++){
      if(a1[i][0]==a2[i][2]&&a1[i][1]==a2[i][1]){
          c++;
      }
      c=n1+n2-c-1;
      int sum[c][3];
        for(int i=0;i<c;i++){
            if(a1[i][0]==a2[i][2]&&a1[i][1]==a2[i][1]){
                  sum[i][0]=a1[i][0];
                  sum[i][1]=a1[i][1];
                  sum[i][2]=a1[i][2]+a2[i][2];
            
            }
            else if(a1[i][1]>a2[i][1]){
                sum[i][]
            }
        }
    }
}