#include <iostream>
#include <stdio.h>
#include <string.h>

union Dato {
    int i;
    float f;
    char str[20];
};

int main() {
    union Dato dato;

    dato.i = 10;
    printf("dato.i: %d\n", dato.i);

    dato.f = 220.5;

    printf("dato.f: %.2f\n", dato.f);
    printf("dato.i (después de asignar dato.f): %d\n", dato.i);


    strcpy(dato.str, "C programming");

    printf("dato.str: %s\n", dato.str);
    printf("dato.f (después de asignar dato.str): %.2f\n", dato.f);

    return 0;
}
