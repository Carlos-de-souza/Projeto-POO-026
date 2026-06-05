#include "Usuario.h"

Usuario::Usuario(int cod, string n, StatusUsuario stat) : codigo(cod), nome(n), status(stat) {}

int Usuario::getCodigo() const { return codigo; }
string Usuario::getNome() const { return nome; }
StatusUsuario Usuario::getStatus() const { return status; }

void Usuario::setCodigo(const int cod) { codigo = cod; }
void Usuario::setNome(const string n) { nome = n; }
void Usuario::setStatus(const StatusUsuario stat) { status = stat; }

// Implementação simples da sobrecarga do operador ==
bool Usuario::operator==(const Usuario& outro) const {
    return this->codigo == outro.codigo;
}