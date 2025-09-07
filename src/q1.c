
/* Write a C program that takes an integer input from the user and determines if it is positive, negative, or zero.
Expected Output:
If n > 0, print Positive (case-insensitive, extra messages allowed).
If n < 0, print Negative (case-insensitive, extra messages allowed).
If n == 0, print Zero (case-insensitive, extra messages allowed).
*/


#include <stdio.h>

int main() {
    int n;
printf("Enter an integer: ");
scanf("%d", &n);
  
    if (n > 0) {
        printf("The number is Positive.\n");
    } else if (n < 0) {
        printf("The number is Negative.\n");
    } else {
        printf("The number is Zero.\n");
    }

    return 0;
}
