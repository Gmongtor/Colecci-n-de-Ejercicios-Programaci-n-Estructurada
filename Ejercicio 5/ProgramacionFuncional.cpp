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
public:
    void agregarEstudiante(Estudiante est) {
        estudiantes.push_back(est);
    }

    void imprimirEstudiantes() {
        for (int i = 0; i < estudiantes.size(); i++) {
            estudiantes[i].imprimir();
        }
    }
};
int main() {
    ListaEstudiantes lista;
    lista.agregarEstudiante(Estudiante("Juan Pérez", 20, 8.5));
    lista.agregarEstudiante(Estudiante("Ana Gómez", 22, 9.1));

    lista.mostrarEstudiantes();

    return 0;
}