#include <stdio.h>

/*
   Name  : Mohd Altamash Ali
   UIN   : 251P039
   Div   : C
   Class : Comps
*/

int main() {
    int arr[100], n, i, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];   // Assume first element is largest

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", max);

    return 0;
}
