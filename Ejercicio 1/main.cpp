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