#include "Emprestimo.h"

using std::cout;
using std::endl;

Emprestimo::Emprestimo(int dataDEm, const StatusEmprestimo &status)
{
}

int Emprestimo::getDataDeEmp() const
{
    return dataDeEmprestimo;
}

StatusEmprestimo Emprestimo::getStatusEmp() const
{
    return this->status;
}

void Emprestimo::setDataDeEmp(const int dataDeEmprestimo)
{
    this->dataDeEmprestimo = dataDeEmprestimo;
}

void Emprestimo::setStatusEmp(const StatusEmprestimo &status)
{
    this->status = status;
}

void Emprestimo::dadosEmprestimo() const
{
    cout << "Data de empréstimo: " << this->dataDeEmprestimo << endl;
    cout << "Status do empréstimo: " << status.toString() << endl;
}
