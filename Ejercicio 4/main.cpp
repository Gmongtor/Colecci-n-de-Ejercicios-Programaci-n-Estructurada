#include <stdio.h>
#include <string.h>


typedef struct {
    char nombre[100];
    int edad;
    float promedio;
} Estudiante;

int main() {

    Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan Pérez");
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;

    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", estudiante1.nombre, estudiante1.edad, estudiante1.promedio);
     return 0;
}
