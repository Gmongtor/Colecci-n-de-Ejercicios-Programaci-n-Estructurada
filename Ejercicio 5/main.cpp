#include <stdio.h>
#include <string.h>

typedef struct {
    char nombre[100];
    int edad;
    float promedio;
} Estudiante;

void imprimirEstudiantePorReferencia(Estudiante *est) {
    printf("Nombre: %s\nEdad: %d\nPromedio: %.2f\n", est->nombre, est->edad, est->promedio);
}

int main() {

    Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Sergio");
    estudiante1.edad = 16;
    estudiante1.promedio = 5.5;

    imprimirEstudiantePorReferencia(&estudiante1);

    return 0;
}

