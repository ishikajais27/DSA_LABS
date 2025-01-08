#include <stdio.h>

int main() {
    // Define an array to store the coefficients of the polynomial
    // Since the highest power of x is 100, we need an array of size 101
    int polynomial[6]={2,13,0,3,0,2} ;

    // Set the coefficient of x^100 to 1
    // polynomial[100] = 1;

    // Set the constant term (x^0) to 5
    // polynomial[0] = 5;

    // Display the polynomial
    printf("The polynomial is: ");
    for (int i = 5; i >= 0; i--) {
        if (polynomial[i] != 0) {
            if (i != 0) {
                printf("%dx^%d +", polynomial[i], i);
            } 
            else {
                printf("%d ", polynomial[i]);
            }
        }
    }
 printf("= 0\n");
    
}
   


