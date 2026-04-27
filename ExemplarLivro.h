#ifndef EXEMPLARLIVRO_H
#define EXEMPLARLIVRO_H

#include <iostream>
#include <string>
#include "Livro.h"
#include "StatusEmprestimo.h"

class ExemplarLivro
{
private:
    int nroDoExemplar;
    StatusEmprestimo status;

public:
    ExemplarLivro(int nroEx, StatusEmprestimo sts);
    ExemplarLivro();
    int getNroEx() const;
    StatusEmprestimo getStatus() const;

    void setNroEx(const int nroDoExemplar);
    void setStatus(const StatusEmprestimo status);
};

#endif