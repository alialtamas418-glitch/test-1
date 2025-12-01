#include <stdio.h>

/*
   Name  : Mohd Altamash Ali
   UIN   : 251P039
   Div   : C
   Class : Comps
*/

void counter() {
    static int count = 0;   // static variable → retains value between calls
    count++;
    printf("Function called %d times\n", count);
}

int main() {
    counter();
    counter();
    counter();
    counter();

    return 0;
}
