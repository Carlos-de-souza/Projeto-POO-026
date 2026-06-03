#include "ExemplarLivro.h"
#include <iostream>

ExemplarLivro::ExemplarLivro(int nroEx)
{
    nroDoExemplar = nroEx;
    status = StatusEmprestimo::DISPONIVEL;
}

// Getters
int ExemplarLivro::getNroDoExemplar() const
{
    return nroDoExemplar;
}

StatusEmprestimo ExemplarLivro::getStatus() const
{
    return status;
}

// Setters
void ExemplarLivro::setNroDoExemplar(const int nroEx)
{
    nroDoExemplar = nroEx;
}

void ExemplarLivro::setStatus(const StatusEmprestimo &status)
{
    this->status = status;
}

// Metodos
void ExemplarLivro::imprimirDadosExemplar() const
{
    cout << "Exemplar: " << nroDoExemplar << endl;
    cout << "Status: " << statusEmprestimoToString(status) << endl;
}