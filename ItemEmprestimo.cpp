#include "ItemEmprestimo.h"

using std::cout;
using std::endl;

ItemEmprestimo::ItemEmprestimo(int dPD, int dQFD) : dataParaDevolucao(DPD), dataQueFoiDevolvido(dQFD)
{
}

int ItemEmprestimo::getDPDev() const
{
    return dataParaDevolucao;
}

int ItemEmprestimo::getDQFDev() const
{
    return dataQueFoiDevolvido;
}

void ItemEmprestimo::setDPDev(const int dataParaDevolucao)
{
    this->dataParaDevolucao = dataParaDevolucao;
}

void ItemEmprestimo::setDQFDev(const int dataQueFoiDevolvido)
{
    this->dataQueFoiDevolvido = dataQueFoiDevolvido;
}

void ItemEmprestimo::dadosItemEmprestimo() const
{
    cout << "Data Para Devolucao: " << dataParaDevolucao << endl;
    cout << "Data Que Foi Devolvido: " << dataQueFoiDevolvido << endl;
}
