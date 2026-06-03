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
    Endereco *endereco;

public:
    Editora(int c, string n, Endereco *end);
    // Getters
    int getCodigo() const;
    string getNome() const;
    Endereco *getEndereco() const;
    // Setters
    void setCodigo(int c);
    void setNome(string n);
    void setEndereco(Endereco *end);
    // Metodos
    void imprimirDadosEditora() const;
};

#endif