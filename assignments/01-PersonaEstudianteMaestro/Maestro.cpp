#include "Maestro.hpp"
#include <iostream>

Maestro::Maestro() {

}

Maestro::Maestro(std::string nom, int ed, std::string dep) : Persona(nom, ed) {
    this->nombre = nombre;
    this->edad = edad;
    this->departamento = dep;
}

std::string Maestro::getDepartamento() {
    return departamento;
}

void Maestro::muestraDatos() {
    std::cout << "Nombre: " << nombre << "\n";
    std::cout << " Edad: " << edad << "\n";
    std::cout << " Departamento: " << departamento << "\n";
}