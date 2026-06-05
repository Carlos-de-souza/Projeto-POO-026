#include "Professor.h"
#include <iostream>

Professor::Professor(int cod, string n, StatusUsuario stat) 
    : Usuario(cod, n, stat) {}

void Professor::apresentar() const {
    std::cout << "[PROFESSOR] Codigo: " << codigo 
              << " | Nome: " << nome 
              << " | Status: " << statusToString(status) << std::endl;
}