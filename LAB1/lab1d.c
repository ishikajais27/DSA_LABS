// Write a menu driven program to create a structure to represent complex number and
// perform the following operation using function :
// 1. addition of two complex number (call by value)
// 2. multiplication of two complex number (call by address
#include <stdio.h>
struct complexNumbers
{
    float real;
    float imaginary;
};
void sum( struct complexNumbers n1,struct complexNumbers n2){
    int x= n1.real+n2.real;
    int y=n1.imaginary+n2.imaginary;
    printf("Sum= %d+%di",x,y);
}
void multiplication( struct complexNumbers *n1,struct complexNumbers *n2){
    int x= ((*n1).real*(*n2).real)-((*n1).imaginary* (*n2).imaginary);
    int y=((*n1).real*(*n2).imaginary)+((*n1).imaginary*(*n2).real);
    printf("Product= %d+%di",x,y);
}
int main()
{
    struct complexNumbers n1;
    struct complexNumbers n2;
    printf("Enter 1st complex number- ");
    scanf("%f %f", &n1.real, &n1.imaginary);
    printf("Enter 2nd complex number- ");
    scanf("%f %f", &n2.real, &n2.imaginary);
    int choice;
    int* p1,p2;
    p1=&n1;
    p2=&n2;
    printf("Enter your choice- ");
    scanf("%d",&choice);
    choice==1?sum(n1,n2):multiplication(p1,p2);
}
