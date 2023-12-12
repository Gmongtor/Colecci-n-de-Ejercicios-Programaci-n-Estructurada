#include <stdio.h>

typedef struct {
    char nombre[100];
    int edad;
    float promedio;
} Estudiante;

void imprimirEstudiantePorReferencia(Estudiante *est) {
    printf("Nombre: %s\nEdad: %d\nPromedio: %.2f\n", est->nombre, est->edad, est->promedio);
}

