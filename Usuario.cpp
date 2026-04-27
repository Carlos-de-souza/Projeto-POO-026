#include "Usuario.h"

using std::cout;
using std::endl;

Usuario::Usuario(int cod, string n) : codigo(cod), nome(n)
{
}

Usuario::Usuario()
{
}

int Usuario::getCodigo() const
{
    return codigo;
}

string Usuario::getNome() const
{
    return nome;
}

StatusUsuario Usuario::getStatUser() const
{
    return this->status;
}

void Usuario::setCodigo(const int codigo)
{
}

void Usuario::setCodigo(const int codigo)
{
    this->codigo = codigo;
}

void Usuario::setNome(const string nome)
{
    this->nome = nome;
}

void Usuario::setStatUser(const StatusUsuario &status)
{
    this->status = status;
}

void Usuario::apresentarUsuario() const
{
    cout << "Código do usuário: " << this->codigo << endl;
    cout << "Nome do usuário: " << this->nome << endl;
    cout << "Status do usuário: " << status.toString() << endl;
}