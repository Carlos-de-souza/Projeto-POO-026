#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <string>
#include "StatusUsuario.h"

using std::string;

class Usuario
{
private:
    int codigo;
    string nome;
    StatusUsuario status;

public:
    Usuario(int cod, string n, const StatusUsuario &status);
    Usuario();
    int getCodigo() const;
    string getNome() const;
    StatusUsuario getStatUser() const;

    void setCodigo(const int codigo);
    void setNome(const string nome);
    void setStatUser(const StatusUsuario &status);
    void apresentarUsuario() const;
};

#endif