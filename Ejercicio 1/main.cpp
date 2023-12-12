#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[50];
    int edad;
    float promedio;
} Estudiante;

typedef struct nodo {
    Estudiante estudiante;
    struct nodo *siguiente;
} Nodo;

Nodo *primero = NULL;

void agregarEstudiante(Estudiante est) {
    Nodo *nuevo = (Nodo *) malloc(sizeof(Nodo));
    nuevo->estudiante = est;
    nuevo->siguiente = NULL;

    if (primero == NULL) {
        primero = nuevo;
    } else {
        Nodo *actual = primero;
        while (actual->siguiente != NULL) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevo;
    }
}
void mostrarEstudiantes() {
    Nodo *actual = primero;
    while (actual != NULL) {
        printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", actual->estudiante.nombre, actual->estudiante.edad, actual->estudiante.promedio);
        actual = actual->siguiente;
    }
}
