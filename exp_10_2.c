#include <stdio.h>

int main() {
    /*
       Name : Altamash Ali
       CLASS : COMPS F.Y. DIVISION:- C-2
       UIN : 251P039
    */

    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int *p = a + n - 1;

    printf("Reverse: ");
    for(int i = 0; i < n; i++)
        printf("%d ", *(p - i));

    return 0;
}
