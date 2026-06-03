#ifndef ENDERECO_H
#define ENDERECO_H

#include <iostream>
#include <string>

using namespace std;

class Endereco
{
private:
    string rua;
    int numero;
    string bairro;
    string cidade;
    string estado;
    string cep;

public:
    Endereco(string rua, int numero, string bairro, string cidade, string estado, string cep);

    // Getters
    string getRua() const;
    int getNumero() const;
    string getBairro() const;
    string getCidade() const;
    string getEstado() const;
    string getCep() const;

    // Setters
    void setRua(const string rua);
    void setNumero(const int numero);
    void setBairro(const string bairro);
    void setCidade(const string cidade);
    void setEstado(const string estado);
    void setCep(const string cep);

    // Metodos
    void imprimirEndereco() const;
};

#endif