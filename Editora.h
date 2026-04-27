#ifndef EDITORA_H
#define EDITORA_H

#include <iostream>
#include <string>
#include "Endereco.h"

using namespace std;

class Editora
{
private:
    int codigo;
    string nome;
    Endereco endereco;

public:
    Editora(int cod, string n, Endereco &end);
    int getCodigo();
    string getNome();
    Endereco getEndereco();

    void setCodigo(int codigo);
    void setNome(string nome);
    void setEndereco(Endereco &end);
    void apresentarEditora();
};

#endif