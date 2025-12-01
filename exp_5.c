#include <stdio.h>

// Iterative function to find factorial
long long factorial_iterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Recursive function to find factorial
long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;              // Base case
    else
        return n * factorial_recursive(n - 1); // Recursive call
}

int main() {
    int num;

    /* 
       Name  : Mohd Altamash Ali
       UIN   : 251P039
       Div   : C
       Class : Comps
    */

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of negative numbers is not defined.\n");
    } else {
        printf("Factorial of %d using iterative function = %lld\n",
               num, factorial_iterative(num));

        printf("Factorial of %d using recursive function = %lld\n",
               num, factorial_recursive(num));
    }

    return 0;
}