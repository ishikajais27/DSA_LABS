#include<stdio.h>
void comparision(int* p1,int* p2){
    if(*p1>*p2){
        printf("%d is greater than %d",*p1,*p2);
    }
       else if(*p1<*p2){
        printf("%d is greater than %d",*p2,*p1);
    }

}
int main(){
   int n1,n2;
   printf("Enter 1st n0- ");
   scanf("%d",&n1);
      printf("Enter 2nd n0- ");
   scanf("%d",&n2);
 int* p1=&n1;
 int* p2=&n2;
 comparision(p1,p2);
}