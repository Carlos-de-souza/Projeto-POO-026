#ifndef AUTOR_H
#define AUTOR_H

#include <iostream>
#include <string>

using std::string;

class Autor
{
private:
    int codigo;
    string nome;

public:
    Autor(int cod, string n);
    Autor();
    int getCodigo() const;
    string getNome() const;

    void setCodigo(const codigo);
    void setIdade(const nome);
    void apresentarAutor() const;
};

#endif