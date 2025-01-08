// 2.1 WAP to create a 1-D array of n elements and perform the following menu
// based operations using function. a. insert a given element at specific
// position. b. delete an element from a specific position of the array. c.
// linear search to search an element d. traversal of the array
#include <stdio.h>
#include<string.h>
void insertion(int arr[], int e, int p) {
  int length = 0;
  for (int i = 0; arr[i] != '\0'; i++) {
    length++;
  }
   if(p>length || p<0){
    printf("Position is invalid!");
    return;
   }
   else{
      for (int i = 0; i < length; i++) {
    if (i == p) {
      for (int j = length; j > p; j--) {
        arr[j] = arr[j - 1];
      }
      arr[p] = e;
      length++;
    } 
  }
  printf("\n Array after insertion- ");
  for(int i=0;i<length;i++){
    printf("\n %d",arr[i]);
  }
   }
}
void delete (int arr[], int p) {
  int n = 0;
  for (int i = 0; arr[i] != '\0'; i++) {
    n++;
  }
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (p == i) {
      for (int j = 0; j < n - p; j++) {
        arr[p + j] = arr[p + j + 1];
      }
    }
  }
  if (count == n) {
    printf("position not found!");
  } else {
    printf("Array after inserting the given element at the given position");
    for (int i = 0; i < n - 1; i++) {
      printf("\n%d", arr[i]);
    }
  }
}
void linearSearch(int arr[], int e) {
  int n = 0;
  for (int i = 0; arr[i] != '\0'; i++) {
    n++;
  }
  for (int j = 0; j < n; j++) {
    if (arr[j] == e) {
      printf("Element found at position %d", j + 1);
    }
  }
}
void tranversal(int arr[]) {
  int n = 0;
  for (int i = 0; arr[i] != '\0'; i++) {
    n++;
  }
  printf("Array after transverse");
  for (int j = 0; j < n; j++) {
    printf("\n arr[j]");
  }
}
int main() {
  int n, e3;
  printf("Enter the size of an array- ");
  scanf("%d", &n);
  int arr[10];
  printf("Enter the elements of an array- ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int choice, e1, p1, p2;
  printf("MENU-\n 1. Insert \n2. Delete \n3. Linear Search \n4. Travers\n 5. "
         "Exit");
  printf("Enter opiton- ");
  scanf("%d", &choice);
  switch (choice) {
  case 1:
    printf("Enter the element you want to insert- ");
    scanf("%d", &e1);
    printf("Enter the position where you wnat to insert that element- ");
    scanf("%d", &p1);
    insertion(arr, e1, p1);
    break;
  case 2:
    printf("enter the position from where you want to delete the element from "
           "the array- ");
    scanf("%d", &p2);
    delete (arr, p2);
    break;
  case 3:
    printf("Enter the element you want to search- ");
    scanf("%d", &e3);
    linearSearch(arr, e3);
    break;
  case 4:
    tranversal(arr);
    break;
  }
}
