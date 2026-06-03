#include "Endereco.h"

Endereco::Endereco(string rua, int numero, string bairro, string cidade, string estado, string cep)
{
    this->rua = rua;
    this->numero = numero;
    this->bairro = bairro;
    this->cidadecidade;
    this->estado = estado;
    this->cep = cep;
}

// Getters
string Endereco::getRua() const
{

    return rua;
}

int Endereco::getNumero() const
{

    return numero;
}

std::string Endereco::getBairro() const
{

    return bairro;
}

std::string Endereco::getCidade() const
{

    return cidade;
}

std::string Endereco::getEstado() const
{

    return estado;
}

std::string Endereco::getCep() const
{

    return cep;
}

// Setters
void Endereco::setRua(const string r)
{
    this->rua = rua;
}

void Endereco::setNumero(const int n)
{
    this->numero = numero;
}

void Endereco::setBairro(const string b)
{
    this->bairro = bairro;
}

void Endereco::setCidade(const string c)
{
    this->cidade = cidade;
}

void Endereco::setEstado(const string estado)
{
    this->estado = estado;
}

void Endereco::setCep(const string cep)
{
    this->cep = cep;
}

// Metodos
void Endereco::imprimirEndereco() const
{
    cout << "Rua: " << rua << endl;
    cout << "Número: " << numero << endl;
    cout << "Bairro: " << bairro << endl;
    cout << "Cidade: " << cidade << endl;
    cout << "Estado: " << estado << endl;
    cout << "CEP: " << cep << endl;
}