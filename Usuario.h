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
    Usuario(int cod, string n, StatusUsuario stat);
    int getCodigo() const;
    string getNome() const;
    StatusUsuario getStatus() const;

    void setCodigo(const int cod);
    void setNome(const string n);
    void setStatus(const StatusUsuario stat);
    void apresentarUsuario() const;
};

#endif