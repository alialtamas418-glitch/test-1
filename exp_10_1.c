#include <stdio.h>

int main() {
    /*
       Name : Altamash Ali
       CLASS : COMPS F.Y. DIVISION:- C-2
       UIN : 251P039
    */

    int a, b, *p, *q;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p = &a;
    q = &b;

    printf("Sum = %d", (*p + *q));
    return 0;
}
