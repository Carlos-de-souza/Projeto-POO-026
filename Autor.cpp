#include "Autor.h"

using std::cout;
using std::endl;

Autor::Autor(int cod, string n) : codigo(cod), nome(n)
{
}

Autor::Autor()
{
}

int Autor::getCodigo() const
{
    return codigo;
}

string Autor::getNome() const
{
    return nome;
}

void Autor::setCodigo(const codigo)
{
    this->codigo = codigo;
}

void Autor::setIdade(const nome)
{
    this->nome = nome;
}

void Autor::apresentarAutor() const
{
    cout << "Código do autor: " << this->codigo << endl;
    cout<< "Nome do autor" << this->nome <<endl
}
