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
void eliminarEstudiante(char *nombre) {
    Nodo *actual = primero, *anterior = NULL;
    while (actual != NULL && strcmp(actual->estudiante.nombre, nombre) != 0) {
        anterior = actual;
        actual = actual->siguiente;
    }
    if (actual == NULL) return;
    if (anterior == NULL) primero = actual->siguiente;
    else anterior->siguiente = actual->siguiente;
    free(actual);
}
int main() {
    agregarEstudiante((Estudiante) {"Juan Pérez", 20, 8.5});
    agregarEstudiante((Estudiante) {"Ana Gómez", 22, 9.1});
    agregarEstudiante((Estudiante) {"Sergio", 16, 5.5});
    agregarEstudiante((Estudiante) {"María", 18, 7.5});

    mostrarEstudiantes();

    eliminarEstudiante("Sergio");

    printf("\nDespués de eliminar a Sergio:\n\n");

    mostrarEstudiantes();

    return 0;
}