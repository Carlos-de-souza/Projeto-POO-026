#ifndef EXEMPLARLIVRO_H
#define EXEMPLARLIVRO_H

#include <iostream>
#include "StatusEmprestimo.h"

using namespace std;

class ExemplarLivro
{
private:
    int nroDoExemplar;
    StatusEmprestimo status;

public:
    ExemplarLivro(int nroEx);
    // Getters
    int getNroDoExemplar() const;
    StatusEmprestimo getStatus() const;
    // Setters
    void setNroDoExemplar(const int nroEx);
    void setStatus(const StatusEmprestimo &status);
    // Metodos
    void imprimirDadosExemplar() const;
};

#endif