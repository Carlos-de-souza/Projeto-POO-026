#include "Endereco.h"

using namespace std;

Endereco::Endereco(string r, int n, string b, string cid, string e, string c) : rua(r), numero(n), bairro(b), cidade(cid), estado(e), cep(c) {}

string Endereco ::getRua()
{
    return rua;
}
int Endereco ::getNumero()
{
    return numero;
}
string Endereco ::getBairro()
{
    return bairro;
}
string Endereco ::getCidade()
{
    return cidade;
}
string Endereco ::getEstado()
{
    return estado;
}
string Endereco ::getCep()
{
    return cep;
}

void Endereco ::setRua(string rua)
{
    this->rua = rua;
}
void Endereco ::setNumero(int numero)
{
    this->numero = numero;
}
void Endereco ::setBairro(string bairro)
{
    this->bairro = bairro;
}
void Endereco ::setCidade(string cidade)
{
    this->cidade = cidade;
}
void Endereco ::setEstado(string estado)
{
    this->estado = estado;
}
void Endereco ::setCep(string cep)
{
    this->cep = cep;
}
void Endereco ::apresentarEndereco()
{
    cout << "---- ENDEREÇO ----" << endl;
    cout << "Rua: " << rua << endl;
    cout << "Número: " << numero << endl;
    cout << "Bairro: " << bairro << endl;
    cout << "Cidade: " << cidade << endl;
    cout << "Estado: " << estado << endl;
    cout << "CEP: " << cep << endl;
}