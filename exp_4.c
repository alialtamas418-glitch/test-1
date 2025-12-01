
#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    /* 
       Name : Mohd Altamash Ali 
       UIN  : 251P039
       Div  : C
       Class: Comps
    */

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Loop through each number in the range
    for (i = start; i <= end; i++) {

        if (i < 2) 
            continue;   // Skip numbers less than 2 (not prime)

        isPrime = 1;    // Assume number is prime

        // Check divisibility
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;  // Not a prime
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
