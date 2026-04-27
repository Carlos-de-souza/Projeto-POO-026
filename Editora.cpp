#include "Editora.h"
#include "Endereco.h"

using namespace std;

Editora::Editora(int cod, string n, Endereco &end) : codigo(cod), nome(n), endereco(end) {}

int Editora::getCodigo()
{
    return codigo;
}
string Editora::getNome()
{
    return nome;
}
Endereco Editora::getEndereco()
{
    return this->endereco;
}

void Editora::setCodigo(int codigo)
{
    this->codigo = codigo;
}
void Editora::setNome(string nome)
{
    this->nome = nome;
}
void Editora::setEndereco(Endereco &end)
{
    this->endereco = end;
}
void Editora::apresentarEditora()
{
    cout << "---- EDITORA ----" << endl;
    cout << "Código: " << codigo << endl;
    cout << "Nome: " << nome << endl;
    endereco.apresentarEndereco();
}