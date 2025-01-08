//Write a program to create a structure to store the information of n number of Employees. 
//Employee’s information includes data members: Emp-id, Name, Designation, basic_salary, 
//hra%, da%. Display the information of employees with gross salary.
//Gross salary = Basic salary + HRA (House rent allowance) + DA (dearness allowance) + MA (medical allowance) 
#include<stdio.h>
 struct Employees{
    char name[10];
    char designation[10];
    int salary;
    char hra[10];
    char da[10];
    int grossSalary;
 };
 int main(){
    int n;
    printf("enter the no. of employees- ");
    scanf("%d",&n);
    struct Employees e[10];
    for (int i=0;i<n;i++){
        printf("\nEnter employee %d information- ",i+1);
            scanf("%s %s %d %s %s",&e[i].name,&e[i].designation,&e[i].salary,&e[i].hra,&e[i].da);
        
    }
    printf("Employee information-\n");
    for(int i=0;i<n;i++){
      printf("\n");
    printf("Name:%s\nDesignation:%s\nBasic-Salary:%d\nHRA:%s\nDA:%s\n",e[i].name,e[i].designation,e[i].salary,e[i].hra,e[i].da);
    }
 }