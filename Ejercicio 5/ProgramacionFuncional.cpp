#include <iostream>
#include <vector>
#include <string>

class Estudiante {
private:
    std::string nombre;
    int edad;
    float promedio;
public:
    Estudiante(std::string n, int e, float p) : nombre(n), edad(e), promedio(p) {}

    void imprimir() {
        std::cout << "Nombre: " << nombre << "\nEdad: " << edad << "\nPromedio: " << promedio << std::endl;
    }
};
class ListaEstudiantes {
private:
    std::vector<Estudiante> estudiantes;
};