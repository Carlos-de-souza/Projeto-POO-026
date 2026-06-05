#include "Aluno.h"
#include <iostream>

// Chama o construtor da classe Base (Usuario) repassando os dados obrigatórios
Aluno::Aluno(int cod, string n, StatusUsuario stat, int ra) 
    : Usuario(cod, n, stat), RA(ra) {}

int Aluno::getRA() const { return RA; }
void Aluno::setRA(int ra) { RA = ra; }

void Aluno::apresentar() const {
    std::cout << "[ALUNO] Codigo: " << codigo 
              << " | Nome: " << nome 
              << " | RA: " << RA 
              << " | Status: " << statusToString(status) << std::endl;
}