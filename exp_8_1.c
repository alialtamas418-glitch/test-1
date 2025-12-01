#include <stdio.h>

/*
   Name  : Mohd Altamash Ali
   UIN   : 251P039
   Div   : C
   Class : Comps
*/

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    gets(str);   

    while (str[i] != '\0') {
        i++;
    }

    printf("Length of the string = %d\n", i);

    return 0;
}
