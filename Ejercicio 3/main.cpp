#include <iostream>
#include <stdio.h>
#include <string.h>

typedef struct {
    char nombre[100];
    int edad;
    float promedio;
} Estudiante;

Estudiante copiarEstudiante(Estudiante original) {
    Estudiante copia;
    strcpy(copia.nombre, original.nombre);
    copia.edad = original.edad;
    copia.promedio = original.promedio;
    return copia;
}

int main() {

    Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan Pérez");
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;


    Estudiante estudiante2 = copiarEstudiante(estudiante1);


    printf("Nombre: %s\nEdad: %d\nPromedio: %.2f\n", estudiante2.nombre, estudiante2.edad, estudiante2.promedio);

    return 0;
}
