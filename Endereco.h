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
    Endereco(string r, int n, string b, string cid, string e, string c);

    string getRua();
    int getNumero();
    string getBairro();
    string getCidade();
    string getEstado();
    string getCep();

    void setRua(string rua);
    void setNumero(int numero);
    void setBairro(string bairro);
    void setCidade(string cidade);
    void setEstado(string estado);
    void setCep(string cep);
    void apresentarEndereco();
};

#endif