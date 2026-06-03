#include "Usuario.h"
#include <iostream>

using std::cout;
using std::endl;

Usuario::Usuario(int cod, string n, StatusUsuario stat) : codigo(cod), nome(n), status(stat)
{
}

// Getters
int Usuario::getCodigo() const
{
    return codigo;
}

std::string Usuario::getNome() const
{
    return nome;
}

StatusUsuario Usuario::getStatus() const
{
    return status;
}

// Setters
void Usuario::setCodigo(const int cod)
{
    codigo = cod;
}

void Usuario::setNome(const string n)
{
    nome = n;
}

void Usuario::setStatus(const StatusUsuario stat)
{
    status = stat;
}

// Metodos
void Usuario::apresentarUsuario() const
{
    cout << "Codigo: " << codigo << endl;
    cout << "Nome: " << nome << endl;
    cout << "Status: " << statusToString(status) << endl;
}