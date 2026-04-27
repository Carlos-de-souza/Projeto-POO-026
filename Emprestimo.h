#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H

#include <iostream>
#include <string>
#include "StatusEmprestimo.h"

class Emprestimo
{
private:
    int dataDeEmprestimo;
    StatusEmprestimo status;

public:
    Emprestimo(int dataDEm, const StatusEmprestimo &status);
    int getDataDeEmp() const;
    StatusEmprestimo getStatusEmp() const;

    void setDataDeEmp(const int dataDeEmprestimo);
    void setStatusEmp(const StatusEmprestimo &status);
    void dadosEmprestimo() const;
};

#endif