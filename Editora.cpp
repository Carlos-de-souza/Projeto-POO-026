#include "Editora.h"

Editora::Editora(int c, std::string n, Endereco *end) : codigo(c), nome(n), endereco(end)
{
}

// Getters
int Editora::getCodigo() const
{
    return codigo;
}

string Editora::getNome() const
{
    return nome;
}

Endereco *Editora::getEndereco() const
{
    return endereco;
}

// Setters
void Editora::setCodigo(int c)
{
    codigo = c;
}

void Editora::setNome(string n)
{
    nome = n;
}

void Editora::setEndereco(Endereco *end)
{
    endereco = end;
}

// Metodos
void Editora::imprimirDadosEditora() const
{
    cout << "Editora: " << nome << endl;
    cout << "Codigo: " << codigo << endl;
    
}