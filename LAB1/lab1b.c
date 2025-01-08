//Write a program to create an array of n elements using dynamic memory allocation. 
//Calculate sum of all the prime elements of the array using function and de-allocate the memory
//of the array after its use
#include<stdio.h>
#include<stdlib.h>

int sumOfPrime(int* element){
    int count=0;
    if(*element>3){
        for(int i=2;i<=*element/2;i++){
        if(*element%i == 0){
         count=1;
        }}
        }
        else if(*element==1|| *element==0){
            count=1;
        }
if(count==0){
    return *element;
}
else{
    return 0;
}
}
int main(){
    int n,sum=0;
    printf("enter the size of an array- ");
    scanf("%d",&n);
    int* p= (int*) malloc(n*sizeof(int));
    printf("Enter the elements of an array- ");
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
     for(int i=0;i<n;i++){
    sum+= sumOfPrime(p+i);
    }
        printf("%d",sum);

}
