#include <iostream>
#include <stdio.h>
#include <string.h>

typedef struct {
    char nombre[100];
    int edad;
    float promedio;
} Estudiante;

Estudiante copiarEstudiante(Estudiante est) {
    Estudiante nuevoEst;
    strcpy(nuevoEst.nombre, est.nombre);
    nuevoEst.edad = est.edad;
    nuevoEst.promedio = est.promedio;
    return nuevoEst;
}

int main() {
    Estudiante original = {"Ana Gómez", 20, 9.5};
    Estudiante copia = copiarEstudiante(original);

    printf("Original: %s, %d, %.2f\n", original.nombre, original.edad, original.promedio);
    printf("Copia: %s, %d, %.2f\n", copia.nombre, copia.edad, copia.promedio);

    return 0;
}
