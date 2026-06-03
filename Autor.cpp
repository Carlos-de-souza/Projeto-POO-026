#include "Autor.h"

Autor::Autor(int cod, string nAutor): codigo(cod), nomeAutor(nAutor) {
}

// Getters
int Autor::getCodigo() const {
    return codigo;
}

string Autor::getNome() const {
    return nomeAutor;
}

// Setters
void Autor::setCodigo(const int codigo) {
    this->codigo = codigo;
}

void Autor::setNome(const string nomeAutor) {
    this->nomeAutor = nomeAutor;
}