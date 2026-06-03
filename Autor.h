#ifndef AUTOR_H
#define AUTOR_H

#include <iostream>
#include <string>

using std::string;

class Autor
{
private:
    int codigo;
    string nomeAutor;

public:
    Autor(int cod, string nAutor);

    // Getters
    int getCodigo() const;
    string getNome() const;

    // Setters
    void setCodigo(const int codigo);
    void setNome(const string nomeAutor);
};

#endif